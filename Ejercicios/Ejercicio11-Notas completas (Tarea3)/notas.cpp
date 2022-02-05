#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int nota = 0;

    cout<<"Ingrese la Nota que obtuvo: ";
    cin>>nota;


    if (nota>=95 && nota<=100)
    {
        cout<<"Su nota es A++";
    }else{
        if (nota>=90 && nota<=94)
        {
           cout<<"Su nota es A+"; 
        }else{
            if (nota>=85 && nota<=89)
            {
                cout<<"Su nota es A";
            }else{
                if (nota>=80 && nota<=84)
                {
                    cout<<"Su nota es A++";
                }else{
                    if (nota>=75 && nota<=79)
                    {
                       cout<<"Su nota es B+";
                    }else{
                        if (nota>=70 && nota<=79)
                        {
                            cout<<"Su nota es B";
                        }else{
                            if (nota>=65 && nota<=69)
                            {
                                cout<<"Su nota es B-";
                            }else{
                                if (nota>=60 && nota<=64)
                                {
                                    cout<<"Su nota en este rango NO ESTA ESPECIFICADA";
                                }else{
                                    if (nota>=55 && nota<=59)
                                    {
                                        cout<<"Su nota es C";
                                    }else{
                                        if (nota>=50 && nota<=54)
                                        {
                                            cout<<"Su nota es C-";
                                        }else{
                                            if (nota>=45 && nota<=49)
                                            {
                                                cout<<"Su nota es D+";
                                            }else{
                                                if (nota>=40 && nota<=44)
                                                {
                                                    cout<<"Su nota es D";
                                                }else{
                                                    if (nota>=35 && nota<=39)
                                                    {
                                                        cout<<"Su nota es D-";
                                                    }else{
                                                        if (nota>=30 && nota<=34)
                                                        {
                                                            cout<<"Su nota es E+";
                                                        }else{
                                                            if (nota>=25 && nota<=29)
                                                            {
                                                                cout<<"Su nota es E";
                                                            }else{
                                                                if (nota>=20 && nota<=24)
                                                                {
                                                                    cout<<"Su nota es F+";
                                                                }else{
                                                                    if (nota>=15 && nota<=19)
                                                                    {
                                                                        cout<<"Su nota es F";
                                                                    }else{
                                                                        if (nota>=10 && nota<=14)
                                                                        {
                                                                            cout<<"Su nota es F";
                                                                        }else{
                                                                            if (nota>=5 && nota<=9)
                                                                            {
                                                                                cout<<"Su nota es F-";
                                                                            }else{
                                                                                if (nota>=0 && nota<=4)
                                                                                {
                                                                                    cout<<"Su nota es F--";
                                                                                }else{
                                                                                    cout<<"Ingrese un rango entre 0-100";
                                                                                }
                                                                                
                                                                            }
                                                                            
                                                                        }
                                                                        
                                                                    }
                                                                    
                                                                }
                                                                
                                                            }
                                                            
                                                        }
                                                        
                                                    }
                                                    
                                                }
                                                
                                            }
                                            
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                    }
                    
                }
                
            }
            
        }
        
    }

    
 return 0;
    }
   

