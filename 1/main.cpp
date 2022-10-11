#include <iostream>
#include <stdio.h>

int main() {
    using namespace std;
    int predel,user_number,all = 0,i = 0,maxint;
    FILE *f1, *f2;
    
    f1=fopen("predel.txt","r");
    fscanf(f1,"%d",&predel);
    fclose(f1);
    
    do{
        cout<<"Введите число - "<<"\n";
        cin>>user_number;
        all += user_number;
        cout<<all<<"\n";
        i++;
        
        if(i==1){
            maxint = user_number;
        }
        
        if(maxint < user_number){
            maxint = user_number;
        }
        
        if(predel < all){
            break;
        }
        
    
    }while(true);
    
    cout<<all<<"\n";
    f2 = fopen("kolmax.txt","w");
    fprintf(f2,"Количство введённых числ - %d, максимальное из них - %d",i,maxint);
    fclose(f2);

    return 0;
}
