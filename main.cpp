#include <iostream>
#include <string>
int main() {
     long long int num;
     std::cout << "Enter number";
     std::cin >> num;
     if (std::cin.fail()) {
          std::cout << "No number entered";
          return 0;
     }
     switch (num >= 1000000000) {
          case true: {
               int billion = num / 1000000000;
               std::cout << billion << " billions ";
               num %= 1000000000;
               [[fallthrough]]; 
          }
          default:
               switch(num >= 1000000) {
                    case true: {
                         int million = num / 1000000;
                         std::cout << million << " millions ";
                         num %= 1000000;
                         [[fallthrough]]; 
                    }
                    default:
                         switch(num >= 1000) {
                              case true: {
                                   int thousand = num / 1000;
                                   std::cout << thousand << " thousands ";
                                   num %= 1000;
                                   [[fallthrough]];
                              }
                              default:
                                   switch(num >= 100) {
                                        case true: {
                                             int hundred = num / 100;
                                             std::cout << hundred << " hundreds ";
                                             num %= 100;
                                             [[fallthrough]];
                                        }
                                        default:
                                             switch(num >= 10) {
                                                  case true: {
                                                       int ten = num / 10;
                                                       std::cout << ten << " tens ";
                                                       num %= 10;
                                                       [[fallthrough]];
                                                  }
                                                  default:
                                                       switch(num >= 1) {
                                                            case true:
                                                                 std::cout << num << " units ";
                                                                 break;
                                                            default:
                                                                 break;
                                                       }
                                             }
                                   }
                         }
               }
          
     }
     
     return 0;

}