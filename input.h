#include<iostream>
#include<iomanip>
#include<stdlib.h>
#include<math.h>
using namespace std;

class complex
{
	private:
		float num1,num2;
		int n;
		char op;
		float result;
	public:
		void input()	
		{
			cout<<"CASIO\t\tscientific calculator:fx-570ES"<<endl<<endl;
			cout<<"Enter First Number : ";
			cin>>num1;
			cout<<"Enter Second Number: ";
			cin>>num2;
			cout<<"Enter Operator: ";
			cin>>op;
		}
		void Basic()
		{
			switch(op)
			{
				case'+':
					result=num1+num2;
					cout<<"Result is:"<<result<<endl;
					break;
				case'-':
					result=num1-num2; 
					cout<<"Result is:"<<result<<endl;
					break;
				case'*':
					result=num1*num2;
					cout<<"Result is:"<<result<<endl;
					break;
					case'/':
					result=num1/num2;
					cout<<"Result is:"<<result<<endl;
					break;
				default:
					break;	 
			}
		}
		
		void squaring()
		{
			cout<<"\t\tSquare Mode\n";
			cout<<"Enter number :";
			cin>>num1;
			cout<<"For squaring press a or b for sqrt or for ^ press any key: ";
			cin>>op;
			if(op=='A' || op== 'a')
				cout<<"Square is:"<<num1*num1<<endl;
			else if(op=='B'||op=='b')
				cout<<"Square Root is:"<<sqrt(num1)<<endl;
			else
			{
				cout<<"Enter Power to be raised:";
				cin>>num2;
				for(int i=0;i<=num2;i++)
					{
						result =1;
						result *= num1;
					}
				cout<<"Result is:"<<result;
			}
		}
		void trignometry()
		{
			cout<<"\t\tTrignometrt MODE\n";
			cout<<"Enter number:";
			cin>>num1;
			cout<<"Select From 6 Trignometric Functions\n"
			<<"1)Sin X \n"<<"2)Cos X\n"<<"3)Tan X\n "
			<<"4)ASin X \n"<<"5)ACos X\n"<<"6)ATan X\n";
			switch(n)
			{
				case 1:
					cout<<"Result is:"<<sin(num1)<<endl;
					break;
				case 2:					
					cout<<"Result is:"<<cos(num1)<<endl;
					break;
				case 3:
					cout<<"Result is:"<<tan(num1)<<endl;
					break;
				case 4:
					cout<<"Result is:"<<asin(num1)<<endl;
					break;
				case 5:
					cout<<"Result is:"<<acos(num1)<<endl;
					break;
				case 6:
					cout<<"Result is:"<<atan(num1)<<endl;
					break;
				default:
					break;
		 		 
			}
		}
	
		void Base_N()
		{
			cout<<"\t\tBase_N MDOE\n";
			long num;
			cout<<"Select coversion from which to which..\n"
				<<"1) Decimal To Binary\n"<<"2) Binary to Decimal\n"
				<<"3) Decimal To Octal\n"<<"4) Octal to Decimal\n"
				<<"5) Decimal to Hexadecimal";
			cin>>n;
			cout<<endl;
			if(n==1)
			{
				cout<<"Enter Decimal Number:";
				cin>>num;
				const int  Shift = 8 * sizeof(unsigned)-1;
				const unsigned MASK = 1 << Shift;
				cout << setw( 10 ) <<num << "=" ;
				for ( unsigned i=1;i<= Shift + 1;++i ) 
				{ 
					cout << (num & MASK ? '1' : '0' ); 
					num<<= 1; // shift valueleftby1
					if (i%8== 0 ) 
					cout<<' ' ; 
				}	 
				cout << endl; 
			}
			else if(n==2)
			{
				long bin, dec = 0, rem, base=1;
				cout<<"Enter Number(Enter 0s and 1s for binary):";
				cin>>num;
			    bin = num;
    			while (num > 0)
   				{
        			rem = num % 10;
       				dec = dec + rem * base;
       			 	base = base * 2;
        			num = num / 10;
    			}
    			cout << "The decimal equivalent of " << bin << " : " << dec << endl;
			}
			else if(n==3)
			{
				int total = 0; 
				cout << "Please enter a decimal: ";
				cin >> num;
				while(num > 0)
				{  
					total = num % 8;  
					num /= 8;  		 
					cout << total << " ";
				}		  
 			}
 			else if(n==4)
 			{
				int total = 0; 
				cout << "Please enter a octal: ";
				cin >> num;
				while(num > 0)
				{
					total = num % 10;  
					num /= 10;  		 
					cout << total << " ";
				}	  
			}	
			else if(n==5)
			{
				int counter,x,a,hex[100];
				cout<<"Please enter a decimal: ";
				cin>>num;
				for(counter=0;num!=0;counter++)
				{
					a=num%16;
					hex[counter]=a;
					num=num/16;
				}
				for(x=counter-1;x>=0;x--)
				{
					if(hex[x]==10)
					{
						cout<<"A";
					}
					else if(hex[x]==11)
					{
						cout<<"B";
					}
					else if(hex[x]==12)
					{
						cout<<"C";
					}
					else if(hex[x]==13)
					{
						cout<<"D";
					}
					else if(hex[x]==14)
					{
						cout<<"E";
					}
					else if(hex[x]==15)
					{
						cout<<"F";
					}
					else
					{
						cout<<hex[x];
					}
				}
			}
			else
				cout<<"Wrong Input..."<<endl;
		}
	
		int Matrix()
		{
			int s1,s2,s3;
			float det=0;
			float Mat1[3][3],Mat2[3][3];
			cout<<"\t\tMatix Mode\n";
			cout<<"Enter Number of Matrix(Max 2):";
			cin>>n;
			if(n==1)
			{
				cout<<"Choose Matrix Dimension:\n"
					<<"1) 2x2\n2) 3x3\n ";
				cin>>s1;
				switch(s1)
				{
					case 1:
						cout<<"Enter Elements:\n";
						cin>>Mat1[0][0];
						cin>>Mat1[0][1];
						cin>>Mat1[1][0];
						cin>>Mat1[1][1];
						cout<<"Your Matrix: ";
						cout<<"\t \n"<<Mat1[0][0]<<"  "<<Mat1[0][1]<<endl;
						cout<<"\t \n"<<Mat1[1][0]<<"  "<<Mat1[1][1]<<endl;
					
						cout<<"Now What Action Do You want to Perform:"
							<<"\n1)Determinant \n2)Inverse\n3)Transpose\n";
						cin>>num2;
						switch(s2)
						{
							case 1:
								det = det + (Mat1[0][0]*Mat1[1][1]) -( Mat1[0][1]*Mat1[1][0]);
								cout<<"Detminant of 2x2 is:"<<det<<endl;
								break;					
							case 2:
								float inv[2][2];
								inv[0][0] = Mat1[1][1];
								inv[1][1] = Mat1[0][0];
								inv[0][1] = (-1)*Mat1[0][1];
								inv[1][0] = (-1)*Mat1[1][0];
									
								cout<<"Taking Inverse...\n";
								inv[0][0] /= (Mat1[0][0]*Mat1[1][1]-Mat1[0][1]*Mat1[1][0]); 
								inv[0][1] /= (Mat1[0][0]*Mat1[1][1]-Mat1[0][1]*Mat1[1][0]); 
								inv[1][0] /= (Mat1[0][0]*Mat1[1][1]-Mat1[0][1]*Mat1[1][0]); 
								inv[1][1] /= (Mat1[0][0]*Mat1[1][1]-Mat1[0][1]*Mat1[1][0]); 
								cout<<"Invserse : "<<inv[0][0]<<setw(3)<<" "<<inv[0][1]<<endl;
								cout<<"\t   "<<inv[1][0]<<" "<<inv[1][1];  
								break;
							case 3:
								float transpose[2][2];
								transpose[0][0] = Mat1[0][0];
								transpose[0][1] = Mat1[1][0];
								transpose[1][0] = Mat1[0][1];
								transpose[1][1] = Mat1[1][1];
								
								cout<<"Transpose: "<< transpose[0][0]<<" "<<setw(3)<<transpose[0][1];
								cout<<"\n\t   "<<transpose[1][0]<<" "<<setw(3)<<transpose[1][1];
								break;
						}
						break;
						
					case 2:
							
						cout<<"Enter Elements (3x3):";	
						cin>>Mat1[0][0];
						cin>>Mat1[0][1];
						cin>>Mat1[0][2];
						cin>>Mat1[1][0];
						cin>>Mat1[1][1];
						cin>>Mat1[1][2];
						cin>>Mat1[2][0];
						cin>>Mat1[2][1];
						cin>>Mat1[2][2];			
							
		 				cout<<"Your Matrix: ";
						cout<<"\t \n"<<Mat1[0][0]<<"  "<<Mat1[0][1]<<"  "<<Mat1[0][2];
						cout<<endl;
						cout<<"\t \n"<<Mat1[1][0]<<"  "<<Mat1[1][1]<<"  "<<Mat1[1][2];
						cout<<endl;
						cout<<"\t \n"<<Mat1[2][0]<<"  "<<Mat1[2][1]<<"  "<<Mat1[2][2];
						cout<<endl;
				
						cout<<"Now What Action Do You want to Perform:"
							<<"\n1)Determinant \n2)Inverse\n3)Transpose\n";
						cin>>s3;
						switch(s3)
						{
							case 1:
								det = det + Mat1[0][0]*( Mat1[1][1]*Mat1[2][2]-Mat1[1][2]*Mat1[2][1] ) - Mat1[1][0]*(Mat1[0][1]*Mat1[2][2]- Mat1[0][2]*Mat1[2][1]) 
							  		+ Mat1[2][0]*(Mat1[0][1]*Mat1[1][2]-Mat1[0][2]*Mat1[1][1]);
								cout<<"Detminant of 3x3 is:"<<det<<endl;
								break;
							case 2:
								float cf[3][3],inv[3][3];
								det = det + Mat1[0][0]*( Mat1[1][1]*Mat1[2][2]-Mat1[1][2]*Mat1[2][1] ) - Mat1[1][0]*(Mat1[0][1]*Mat1[2][2]- Mat1[0][2]*Mat1[2][1]) 
									  + Mat1[2][0]*(Mat1[0][1]*Mat1[1][2]-Mat1[0][2]*Mat1[1][1]);
									
								cf[0][0] = Mat1[1][1]*Mat1[2][2]-Mat1[1][2]*Mat1[2][1];
								cf[0][1] = (-1)*(Mat1[1][0]*Mat1[2][2]-Mat1[2][0]*Mat1[1][2]); 
								cf[0][2] = (Mat1[1][0]*Mat1[2][1]-Mat1[2][0]*Mat1[1][1]);
								cf[1][0] = (-1)*(Mat1[0][1]*Mat1[2][2]-Mat1[0][2]*Mat1[2][1]);
								cf[1][1] = Mat1[0][0]*Mat1[2][2]-Mat1[2][0]*Mat1[0][2];
								cf[1][2] = (-1)*(Mat1[0][0]*Mat1[2][1]-Mat1[2][0]*Mat1[0][1]);
								cf[2][0] = Mat1[0][1]*Mat1[1][2]-Mat1[1][1]*Mat1[0][2];
								cf[2][1] = (-1)*(Mat1[0][0]*Mat1[1][2]-Mat1[0][2]*Mat1[1][0]);
								cf[2][2] = Mat1[0][0]*Mat1[1][1]-Mat1[1][0]*Mat1[0][1];
									
								cout<<"Taking Co-Factor of Matrix...\n";
									
								inv[0][0] = cf[0][0]/det;
								inv[0][1] = cf[0][1]/det;
								inv[0][2] = cf[0][2]/det;
								inv[1][0] = cf[1][0]/det;
								inv[1][1] = cf[1][1]/det;
								inv[1][2] = cf[1][2]/det;
								inv[2][0] = cf[2][0]/det;
								inv[2][1] = cf[2][1]/det;
								inv[2][2] = cf[2][1]/det;
								
										
		 						cout<<"Your Matrix: ";
								cout<<"\t \n"<<inv[0][0]<<"  "<<inv[0][1]<<"  "<<inv[0][2];
								cout<<endl;
								cout<<"\t \n"<<inv[1][0]<<"  "<<inv[1][1]<<"  "<<inv[1][2];
								cout<<endl;
								cout<<"\t \n"<<inv[2][0]<<"  "<<inv[2][1]<<"  "<<inv[2][2];
								cout<<endl;
							
									
								break; 
							case 3:
								float transpose[3][3];
								transpose[0][0] = Mat1[0][0];
								transpose[1][0] = Mat1[0][1];
								transpose[2][0] = Mat1[0][2];
								transpose[0][1] = Mat1[1][0];
								transpose[1][1] = Mat1[1][1];	 
								transpose[2][1] = Mat1[1][2];
								transpose[0][2] = Mat1[2][0];
								transpose[1][2] = Mat1[2][1];
								transpose[2][2] = Mat1[2][2];
									
								cout<<"Transpose: "<< transpose[0][0]<<" "<<setw(3)<<transpose[0][1];
								cout<<"\n\t   "<<transpose[1][0]<<" "<<setw(3)<<transpose[1][1];
								break;
					}
				}
			}
			else
				cout<<"Wrong Input...\n";	
		}

		int Equations()
		{				
			float a,b,c; 
			double d,x1,x2;
			cout<<"Choose Equations ax^2+bx+c=0 variables";
			cout<<"\na: ";
			cin>>a;
			cout<<"\nb: ";
			cin>>b;
			cout<<"\nc: ";
			cin>>c;
			if(a==0)
			{
				cout<<"'a' Cannot be zero: Error 404 \n";
				return (0);
			}
			cout<<endl<<a<<"x^2+"<<b<<"x+"<<c<<"=0"<<endl;
			d = b*b-4*( a * c );
			if(d<0)
			{
				cout<<"Equation has no real solution: d<0 \n";
			}
			x1=( -b*b - sqrt( d ) ) / (2*a);
			x2=( -b*b + sqrt( d ) ) / (2*a);
			cout<<"Solutions are \nX1:"<<x1<<"\nX2:"<<x2<<endl;
		}
		
};
