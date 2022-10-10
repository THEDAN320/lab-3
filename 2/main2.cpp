#include <iostream>
#include <stdio.h>
#include <list>

int main() {
    using namespace std;
    setlocale(LC_ALL, "rus");
    
    int number,user_number,i = 0;
    list <int> all_number;
    FILE *f1, *f2;
    
    f1=fopen("C:\programming\startgame.txt","r");
    fscanf(f1,"%d",&number);
    fclose(f1);
    
    do{
        cout<<"Введите число - "<<"\n";
        cin>>user_number;
        
        i++;
        all_number.push_back(user_number);
        
        if(user_number < number){
            cout<<"Число больше!"<<"\n";
        }
        
        if(user_number > number){
            cout<<"Число меньше!"<<"\n";
        }
            
    }while(user_number != number);

    f2 = fopen("C:\programming\endgame.txt","w");
    fprintf(f2,"Количство введённых числ - %d,\nэто числа - ",i);

    for (auto &item: all_number)
    fprintf(f2,"%d ",item);
    
    fclose(f2);

    return 0;
}

        


