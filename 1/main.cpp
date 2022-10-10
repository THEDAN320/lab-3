#include <iostream>
#include <stdio.h>

int main() {
    using namespace std;
    int predel,user_number = 0,all = 0,i = 0,maxint = 0;
    FILE *f1, *f2;
    
    f1=fopen("predel.txt","r");
    fscanf(f1,"%d",&predel);
    fclose(f1);
    
    while(all < predel){
        cout<<"Введите число - "<<"\n";
        cin>>user_number;
        all += user_number;
        i++;
        if(maxint < user_number){
            maxint = user_number;
        }
    
    }
    cout<<all;
    f2 = fopen("kolmax.txt","w");
    fprintf(f2,"Количство введённых числ - %d, максимальное из них - %d",i,maxint);
    fclose(f2);

    return 0;
}
