#include <iostream>
#include <cstring>
#include <vector>
#include <cmath>

void vivod(std::vector<int> pop);
int deleteElement(std::vector<int>& pop,int a);

int main()
{
    std::vector<int> pop{4,4,7,90,1,74,985,5,54,12,412,12,425,51,23};
    vivod(pop);
    std::cout << deleteElement(pop, 6) << std:: endl;
    vivod(pop);

    return 0;
}


void vivod(std::vector<int> pop){
    std::vector<int>::iterator iterator_delete = pop.begin();
    for (;iterator_delete < pop.end(); iterator_delete++){
        std::cout<< *iterator_delete <<" ";
    }
    std::cout<<std::endl;
}

int deleteElement(std::vector<int>& pop,int a){
    int chislo = 0;
    for(int i =0; i < 32; i++){
        chislo += pow(2,i);
    }
    for (std::vector<int>::iterator iterator_delete = pop.begin(); iterator_delete < pop.end(); iterator_delete++){
        if (a==*iterator_delete){
          chislo = *iterator_delete;
          pop.erase(iterator_delete);
          break;

        }
    }
    return chislo;
}

