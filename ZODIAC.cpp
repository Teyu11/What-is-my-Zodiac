#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int date , month;
cout<<"enter the month  no. in which you were born (e.g- 1 for january ,so on and so forth)";
cin<<month;
cout <<"enter the date of your birth";
cin>>date;
void z (int);
void q (int);
void p (int);
void c (int);
void e (int);
     for (int i=1;i<=12;i++)
{
 if  ((month==i && date>=21 )||(month==i+1 && date<=20 ))
        {j=i;
     cout<< <<"zodiac" <<z(j)<<"QUALITIES:"<<q(j)<<"RULLING PLANET:"<<p(j) <<"COLOURS:"<<c(j)<<"Element"<<e(i); }
}
getch();
}
void z (int a)
{
 switch(a)
  {case 1:cout<<"aquarius";
   break;
   case 2:cout<<"pisces";
break;
   case 3:cout<<"aries";
break;
   case 4:cout<<"taurus";
break;
   case 5:cout<<"gemini";
break;
   case 6:cout<<"leo";
break;
   case 7:cout<<"virgo";
break;
   case 8:cout <<"libra";
break;
   case 9:cout<<"scorpio";
break;
   case 10:cout<<"sagittarius";
break;
   case 11:cout<<"capricorn";
break;
   case 12:pisces;}
}

void q (int j);
{
switch(a)
{case 1:cout<<"Logical, hard working, cold, detached";
   break;
   case 2:cout<<"Passionate, kind, unconventional, emotional, sometimes obsessive ";
break;
   case 3:cout<<"Assertive, impulsive, aggressive, humanitarian " ;
break;
   case 4:cout<<"Resourceful, thorough, sometimes indulgent ";
break;
   case 5:cout<<"Imaginative, sensitive, sometimes impractical ";
break;
   case 6:cout<<"Tenacious, calm, sensitive, sometimes clinging ";
break;
   case 7:cout<<"Arrogant, dominating, generous ";
break;
   case 8:cout<<"Practical, efficient, sometimes over-critical ";
break;
   case 9:cout<<"Co-operative, fair, sometimes indecisive ";
break;
   case 10:cout<<"Intelligent, cunning, sensitive ";
break;
   case 11:cout<<"Intelligent, straightforward, sometimes careless. ";
break;
   case 12: cout<<"Intelligent, ambitious, can't trust anyone easily, introverts, straightforward. ";
}
}

void p (int n);
{
switch(a)
{case 1:cout<<"Uranus (Saturn) ";
   break;
   case 2:cout<<"Neptune (Jupiter) ";
break;
   case 3:cout<<"Mars ";
break;
   case 4:cout<<" Venus";
break;
   case 5:cout<<"Mercury ";
break;
   case 6:cout<<"Moon ";
break;
   case 7:cout<<" Sun";
break;
   case 8:cout<<"Mercury ";
break;
   case 9:cout<<" Venus";
break;
   case 10:cout<<"Pluto (Mars) ";
break;
   case 11:cout<<"Jupiter ";
break;
   case 12:cout<<"Saturn ";
}
}
void c (int m);
{
switch(a)
{case 1:cout<<" turquoise";
   break;
   case 2:cout<<" sea green";
break;
   case 3:cout<<" red";
break;
   case 4:cout<<"pink ";
break;
   case 5:cout<<" yellow";
break;
   case 6:cout<<" white , silver";
break;
   case 7:cout<<"orange , gold ";
break;
   case 8:cout<<" brown , navy";
break;
   case 9:cout<<"pastels ";
break;
   case 10:cout<<"dark red ";
break;
   case 11:cout<<"purple ";
break;
   case 12:cout<<"dark brown ";
}
}
void e (int b);
{
switch(a)
{case 1:cout<<"air ";
   break;
   case 2:cout<<"water ";
break;
   case 3:cout<<" fire";
break;
   case 4:cout<<" earth";
break;
   case 5:cout<<"air ";
break;
   case 6:cout<<" water";
break;
   case 7:cout<<"fire ";
break;
   case 8:cout<<"earth ";
break;
   case 9:cout<<"air ";
break;
   case 10:cout<<"water ";
break;
   case 11:cout<<"fire ";
break;
   case 12:cout<<"earth ";
}
}

   