#include<stdio.h>
#include<conio.h>
void main()
{
int p, n, l, c, a, u, x,Q,q;
int t1hours, t1minutes, t1seconds, t2hours, t2minutes, t2seconds;
float rs, cost=0, FinalCost=0;
char ch;
Printf("enter how many types of items are there in shop");
Scanf("%d", &a);
Printf("enter number of person/persons entering into shop");
Scanf("%d", &n);
Printf("enter at what time person/persons are entering into shop");
Scanf("%d%d%d", &t1hours, &t1minutes, &t1seconds);
//label: 
p=p+n;
printf("total number of persons in shop are %d", p);
printf("enter the total number of carts available in shop  c");
scanf("%d", &c);
for(n=1; n<=c; n++)
{
u=n;
for(a=0; a<=a; a++)
{
Printf("enter total available quantity");
Scanf("%d", &Q);
Printf("enter how many items are added to cart q");
Scanf("%d", &q);
if(q<Q)
{
Printf("enter the cost for single item");
Scanf("%f", rs);
}
else
{
Printf("slecting of items should be less than or equal to available items");
}
cost=cost+(q*rs);
Printf("total cost for items in cart %f", cost);
Printf("enter the number of items removed from cart");
Scanf("%d", &x);
FinalCost=FinalCost+((q-x)*rs);
Printf("total purchased cost %f", &FinalCost);
Q=Q-(q-x);
Printf("total available items in shelf %d", Q);
}
}
Printf("total number of persons leaving the shop");
Scanf("%d", &l);
Printf("enter at what time persons are leaving the shop");
Scanf("%d%d%d", &t2hours, &t2minutes, &t2seconds);
p=p-l;
u=u-l;
printf("\t******");
printf("\n\t MENU\n");
printf("\t******");
printf("\n\t(p)persons in the shop");
printf("\n\t(n)how many persons are entering into shop");
printf("\n\t(t1)at what time persons are entering into shop");
printf("\n\t(l)how many persons are leaving the shop");
printf("\n\t(t2)at what time persons are leaving the shop");
printf("\n\t(a)how many types of items are there in shop");
printf("\n\t(u)carts in use");
printf("\n\t(Q)available quantity");
printf("\n\t(q)quantity of items in cart");
printf("\n\t(c)cost of items in cart");
printf("\n\t(FC) cost of purchased items");
printf("\n\t******");
printf("\n\n\t enter your choice:");
scanf("%c", &ch);
switch(ch)
{
case 'p':
printf("\n  total persons in shop: %d", p);
break;
case 'n':
printf("\n how many persons are entering into shop: %d", n);
break;
case 't1':
printf("\n at what time persons are entering into shop: %d%d%d", t1hours, t1minutes, t1seconds);
break;
case 'l':
printf("\n how many persons are leaving the shop: %d", l);
break;
case 't2':
printf("\n at what time persons are leaving the shop: %d%d%d", t2hours, t2minutes, t2seconds);
break;
case 'u':
printf("\n total carts in use: %d", u);
break;
case 'Q':
printf("\n total available quantity: %d", Q);
break;
case 'q':
printf("\n quantity of a item in cart: %d", q);
break;
case 'c':
printf("\n cost for items in cart: %f", cost);
break;
case 'FC':
printf("\n purchesd items cost: %f", FinalCost);
break;
default:
printf("\n invalid choice");
}
//Goto label;
getch();
}

