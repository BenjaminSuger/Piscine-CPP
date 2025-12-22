/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 13:47:13 by bsuger            #+#    #+#             */
/*   Updated: 2025/12/17 16:59:11 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){};

ScalarConverter::~ScalarConverter(){};

ScalarConverter::ScalarConverter(const ScalarConverter &copy) { (void)copy; };

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &old) {
  (void)old;
  return *this;
};

int specialCase(std::string &string) {
  if (string == "nan" || string == "nanf") {
    std::cout
        << "char: impossible\nint: impossible\nfloat: nanf\ndouble: nan\n";
    return 1;
  }
  if (string == "+inf" || string == "+inff") {
    std::cout
        << "char: impossible\nint: impossible\nfloat: +inff\ndouble: +inf\n";
    return 1;
  }
  if (string == "-inf" || string == "-inff") {
    std::cout
        << "char: impossible\nint: impossible\nfloat: -inff\ndouble: -inf\n";
    return 1;
  }
  return 0;
}

std::string trim(std::string &string) {
  std::string whitespace(" \t\f\v\n\r");
  size_t first = string.find_first_not_of(whitespace);
  if (first == std::string::npos)
    return string;
  size_t last = string.find_last_not_of(whitespace);
  std::string result = string.substr(first, (last - first + 1));
  return result;
}

bool checkValidity(std::string string) {
  char *ptr_end;
  size_t first = string.find_first_not_of(" \t\f\v\n\r");
  if (first == std::string::npos)
    return false;
  std::strtod(string.c_str(), &ptr_end);
  if (*ptr_end == '\0')
    return true;
  if (*ptr_end == 'f' && *(ptr_end + 1) == '\0')
    return true;
  if (*ptr_end != '\0' && *(ptr_end + 1) == '\0')
    return true;
  return false;
}

void convertChar(std::string &string) {
  unsigned char letter = static_cast<unsigned char>(*string.c_str());
  if (std::isprint(letter))
    std::cout << "char: " << "'" << letter << "'" << "\n";
  else
    std::cout << "char: Non displayable\n";
  std::cout << "int: " << static_cast<int>(letter) << "\n";
  std::cout << "float: " << std::fixed << std::setprecision(1)
            << static_cast<float>(letter) << "f\n";
  std::cout << "double: " << std::fixed << std::setprecision(1)
            << static_cast<double>(letter) << "\n";
}

void convertInt(std::string &string) {
  double value = std::strtod(string.c_str(), 0);
  if (value > std::numeric_limits<int>::max() ||
      value < std::numeric_limits<int>::min())
    std::cout << "char: Non displayable\nint: impossible\n";
  else {
    if (value >= 32 && value <= 126)
      std::cout << "char: " << "'" << static_cast<unsigned char>(value) << "'"
                << "\n";
    else
      std::cout << "char: Non displayable\n";
    std::cout << "int: " << static_cast<int>(value) << "\n";
  }
  std::cout << "float: " << std::fixed << std::setprecision(1)
            << static_cast<float>(value) << "f\n";
  std::cout << "double: " << std::fixed << std::setprecision(1)
            << static_cast<double>(value) << "\n";
}

void convertFloat(std::string &string) {
  double value = std::strtod(string.c_str(), 0);

  if (value >= 32 && value <= 126)
    std::cout << "char: " << "'" << static_cast<unsigned char>(value) << "'"
              << "\n";
  else
    std::cout << "char: Non displayable\n";
  if (value > std::numeric_limits<int>::max() ||
      value < std::numeric_limits<int>::min())
    std::cout << "int: impossible\n";
  else
    std::cout << "int: " << static_cast<int>(value) << "\n";
  if (std::fmod(value, 1.0) == 0.0)
    std::cout << std::fixed << std::setprecision(1);
  std::cout << "float: " << static_cast<float>(value) << "f\n";
  std::cout << "double: " << static_cast<double>(value) << "\n";
}

void convertDouble(std::string &string) {
  double value = std::strtod(string.c_str(), 0);

  if (value >= 32 && value <= 126)
    std::cout << "char: " << "'" << static_cast<unsigned char>(value) << "'"
              << "\n";
  else
    std::cout << "char: Non displayable\n";
  if (value > std::numeric_limits<int>::max() ||
      value < std::numeric_limits<int>::min())
    std::cout << "int: impossible\n";
  else
    std::cout << "int: " << static_cast<int>(value) << "\n";
  if (std::fmod(value, 1.0) == 0.0)
    std::cout << std::fixed << std::setprecision(1);
  std::cout << "float: " << static_cast<float>(value) << "f\n";
  std::cout << "double: " << value << "\n";
}

void ScalarConverter::convert(std::string string) {
  string = trim(string);
  if (specialCase(string))
    return;
  if (checkValidity(string) == false) {
    std::cout << "This is not a scalar data\n";
    return;
  }
  if (string.length() == 1 && !std::isdigit(string[0]))
    convertChar(string);
  else if (string.find("f") != std::string::npos)
    convertFloat(string);
  else if (string.find(".") != std::string::npos)
    convertDouble(string);
  else
    convertInt(string);
}
