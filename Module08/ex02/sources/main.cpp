/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 16:13:18 by bsuger            #+#    #+#             */
/*   Updated: 2025/12/30 11:08:32 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <list>
#include <vector>

int main(void) {
  {
    MutantStack<int> mstack;
    std::list<int> list;

    // array of number
    std::vector<int> values;
    values.push_back(1);
    values.push_back(2);
    values.push_back(3);
    values.push_back(4);
    values.push_back(5);
    values.push_back(6);

    // fill the mstack and the list
    for (int i = 0; i < 6; i++) {
      mstack.push(values[i]);
      list.push_back(values[i]);
    }
    // creation of iterator
    MutantStack<int>::iterator it = mstack.begin();
    std::list<int>::iterator it_list = list.begin();
    // now will go through each to compare
    for (; it != mstack.end(); it++, it_list++) {
      std::cout << "the value in the list : " << *it_list << " ";
      std::cout << "the value in the mutant stack : " << *it << "\n";
    }
    // ilustrate the pop() from std::stack
    std::cout << "\nthe top of the stack is " << mstack.top() << "\n";
    for (; mstack.size() != 1;) {
      mstack.pop();
      std::cout << "the new top of the stack is " << mstack.top() << "\n";
    }
    std::cout << "the new top of the stack is " << mstack.top() << "\n";
  }
  {
    std::cout << "\nCONST MSTACCK\n";
    MutantStack<int> mstackTemp;
    mstackTemp.push(10);
    mstackTemp.push(15);
    mstackTemp.push(20);
    const MutantStack<int> mstack_const = mstackTemp;
    MutantStack<int>::const_iterator it_const = mstack_const.begin();
    for (; it_const != mstack_const.end(); it_const++)
      std::cout << *it_const << "\n";
  }
  {
    std::cout << "\nREVERSE ITERATOR\n";
    MutantStack<int> mstack;
    mstack.push(1);
    mstack.push(2);
    mstack.push(3);
    mstack.push(4);
    mstack.push(5);
    MutantStack<int>::reverse_iterator it_reverse = mstack.rbegin();
    for (; it_reverse != mstack.rend(); it_reverse++) {
      std::cout << *it_reverse << "\n";
    }
  }
}

/*
//MAIN FROM THE SUBJECT
int main() {
  MutantStack<int> mstack;
  mstack.push(5);
  mstack.push(17);
  std::cout << mstack.top() << std::endl;
  mstack.pop();
  std::cout << mstack.size() << std::endl;
  mstack.push(3);
  mstack.push(5);
  mstack.push(737);
  mstack.push(0);
  MutantStack<int>::iterator it = mstack.begin();
  MutantStack<int>::iterator ite = mstack.end();
  ++it;
  --it;
  while (it != ite) {
    std::cout << *it << std::endl;
    ++it;
  }
  std::stack<int> s(mstack);
  return 0;
}
*/
// MAIN FORM THE SUBJECT BUT WITH STD::LIST
// remove the pop() and the top() which does not exist in std::list so I remove
// the push(17)
/*
int main() {
  std::list<int> mstack;
  mstack.push_back(5);
  std::cout << mstack.size() << std::endl;
  mstack.push_back(3);
  mstack.push_back(5);
  mstack.push_back(737);
  mstack.push_back(0);
  std::list<int>::iterator it = mstack.begin();
  std::list<int>::iterator ite = mstack.end();
  ++it;
  --it;
  while (it != ite) {
    std::cout << *it << std::endl;
    ++it;
  }
  return 0;
}
*/
