#include "List.h"
#include <iostream>

int main() {
    List originalList;
    originalList.append(1);
    originalList.append(2);
    originalList.append(3);

    List copyList1 = originalList;
    std::cout << "Copy List 1: ";
    copyList1.display();

    List copyList2;
    copyList2 = originalList;
    std::cout << "Copy List 2: ";
    copyList2.display();

    return 0;
}
