#include <iostream>
using namespace std;

//Bài 1
/*int main(){
    int n;
    cout<<"Nhap n: ";
    cin>>n;
    if(n%2==0)
        cout<<n<<" la so chan";
    else
        cout<<n<<" la so le";

    return 0;
}*/

//Bài 2
/*int main(){
    int a,b;
    cout<<"\nNhap a, b: ";
    cin>>a>>b;
    if(a*b>0)
        cout<<"2 so cung dau";
    else
        cout<<"2 so trai dau";

    return 0;
}*/

//Bài 3
/*int main(){
    float dl,dn,h,S;
    cout<<"\nNhap day lon, day nho, chieu cao: ";
    cin>>dl>>dn>>h;
    S=((dl+dn)*h)/2;
    cout<<"Dien tich hinh thang la: "<<S;

    return 0;
}*/

//Bài 4
//Cách 1
/*int main(){
    int n;
    cout<<"\nNhap 1<=n<=7: ";
    cin>>n;
    switch(n){
    case 1:
        cout<<"Chu nhat";
        break;
    case 2:
        cout<<"Thu 2";
        break;
    case 3:
        cout<<"Thu 3";
        break;
    case 4:
        cout<<"Thu 4";
        break;
    case 5:
        cout<<"Thu 5";
        break;
    case 6:
        cout<<"Thu 6";
        break;
    case 7:
        cout<<"Thu 7";
        break;
    default:
        cout<<"Khong hop le. Moi nhap lai!";
    }
    return 0;
}*/

//Cách 2
/*int main(){
    int n;
    cout<<"\nNhap 1<=n<=7: ";
    cin>>n;
    if(n==1)
        cout<<"Chu nhat";
    if(n==2)
        cout<<"Thu 2";
    if(n==3)
        cout<<"Thu 3";
    if(n==4)
        cout<<"Thu 4";
    if(n==5)
        cout<<"Thu 5";
    if(n==6)
        cout<<"Thu 6";
    if(n==7)
        cout<<"Thu 7";

    return 0;
}*/

//Bài 5
//Cách 1
/*int main(){
    int a,b,max;
    cout<<"Nhap a, b: ";
    cin>>a>>b;
    if(a>=b)
        cout<<a<<" la so lon nhat";
    else
        cout<<b<<" la so lon nhat";

    return 0;
}*/

//Cách 2:
/*int main(){
    int a,b;
    cout<<"Nhap a, b: ";
    cin>>a>>b;
    cout<<"So lon nhat la: "<<(a>=b ? a : b);

    return 0;
}*/

//Bài 6
//Cách 1
/*int main(){
  int ngay, thang;
  cout<<"Nhap ngay, thang cua ban: ";
  cin>>ngay>>thang;

  switch(thang){
    case 1:
      if( ngay<=19 && ngay>0){
        cout<<"ban sinh ngay " <<ngay<<" thang "<<thang<<"\nban thuoc cung ma ket";
      }
      else if (ngay>19 && ngay <=31){
        cout<<"ban sinh ngay " <<ngay<<" thang "<<thang<<"\nban thuoc cung bao binh";
      }
      else{
        cout<<"khong co ngay ma ban nhap,ban ngu vl";
      }break;


    case 2:
      if(ngay<=18 && ngay >0){
        cout<<"ban sinh ngay " <<ngay<<" thang "<<thang<<"\nban thuoc cung bao binh";
      }
      else if(ngay>18 && ngay <=28){
        cout<<"ban sinh ngay " <<ngay<<" thang "<<thang<<"\nban thuoc cung song ngu";
      }
      else{
        cout<<"khong co ngay ma ban nhap,ban ngu vl";
      }break;


    case 3:
      if(ngay<=20 && ngay >0){
        cout<<"ban sinh ngay " <<ngay<<" thang "<<thang<<"\nban thuoc cung song ngu";
      }
      else if(ngay>20 && ngay <=31){
        cout<<"ban sinh ngay " <<ngay<<" thang "<<thang<<"\nban thuoc cung bach duong";
      }
      else{
        cout<<"khong co ngay ma ban nhap,ban ngu vl";
      }break;


    case 4:
      if(ngay<=19 && ngay >0){
        cout<<"ban sinh ngay " <<ngay<<" thang "<<thang<<"\nban thuoc cung bach duong";
      }
      else if(ngay>19 && ngay <=30){
        cout<<"ban sinh ngay " <<ngay<<" thang "<<thang<<"\nban thuoc cung kim nguu";
      }
      else{
        cout<<"khong co ngay ma ban nhap,ban ngu vl";
      }break;

    case 5:
      if(ngay<=20 && ngay >0){
        cout<<"ban sinh ngay " <<ngay<<" thang "<<thang<<"\nban thuoc cung kim nguu";
      }
      else if(ngay>20 && ngay <=31){
        cout<<"ban sinh ngay " <<ngay<<" thang "<<thang<<"\nban thuoc cung song tu";
      }
      else{
        cout<<"khong co ngay ma ban nhap,ban ngu vl";
      }break;


    case 6:
      if(ngay<=21 && ngay >0){
        cout<<"ban sinh ngay " <<ngay<<" thang "<<thang<<"\nban thuoc cung song tu";
      }
      else if(ngay>21 && ngay <=30){
        cout<<"ban sinh ngay " <<ngay<<" thang "<<thang<<"\nban thuoc cung cu giai";
      }
      else{
        cout<<"khong co ngay ma ban nhap,ban ngu vl";
      }break;


    case 7:
      if(ngay<=22 && ngay >0){
        cout<<"ban sinh ngay " <<ngay<<" thang "<<thang<<"\nban thuoc cung cu giai";
      }
      else if(ngay>22 && ngay<=31){
        cout<<"ban sinh ngay " <<ngay<<" thang "<<thang<<"\nban thuoc cung su tu";
      }
      else{
        cout<<"khong co ngay ma ban nhap,ban ngu vl";
      }break;


    case 8:
      if(ngay<=22&& ngay >0){
        cout<<"ban sinh ngay " <<ngay<<" thang "<<thang<<"\nban thuoc cung su tu";
      }
      else if(ngay>22 && ngay<=31){
        cout<<"ban sinh ngay " <<ngay<<" thang "<<thang<<"\nban thuoc cung xu nu";
      }
      else{
        cout<<"khong co ngay ma ban nhap,ban ngu vl";
      }break;


     case 9:
      if(ngay<=22 && ngay >0){
        cout<<"ban sinh ngay " <<ngay<<" thang "<<thang<<"\nban thuoc cung xu nu";
      }
      else if(ngay>22 && ngay <=30){
        cout<<"ban sinh ngay " <<ngay<<" thang "<<thang<<"\nban thuoc cung thien binh";
      }
      else{
        cout<<"khong co ngay ma ban nhap,ban ngu vl";
      }break;


    case 10:
      if(ngay<=23 && ngay>0){
        cout<<"ban sinh ngay " <<ngay<<" thang "<<thang<<"\nban thuoc cung thien binh";
      }
      else if(ngay>23&& ngay<=31){
        cout<<"ban sinh ngay " <<ngay<<" thang "<<thang<<"\nban thuoc cung than nong";
      }
      else{
        cout<<"khong co ngay ma ban nhap,ban ngu vl";
      }break;


    case 11:
      if(ngay<=21&& ngay>0){
        cout<<"ban sinh ngay " <<ngay<<" thang "<<thang<<"\nban thuoc cung than nong";
      }
      else if(ngay>21 && ngay <=30){
        cout<<"ban sinh ngay " <<ngay<<" thang "<<thang<<"\nban thuoc cung nhan ma";
      }
      else{
        cout<<"khong co ngay ma ban nhap,ban ngu vl";
      }break;


   case 12:
      if(ngay<=21 && ngay >0){
        cout<<"ban sinh ngay " <<ngay<<" thang "<<thang<<"\nban thuoc cung nhan ma";
      }
      else if(ngay>21 && ngay <=31){
        cout<<"ban sinh ngay " <<ngay<<" thang "<<thang<<"\nban thuoc cung ma ket";
      }
      else{
        cout<<"khong co ngay ma ban nhap,ban ngu vl";
      } break;


    default:
        cout<<"nhap sai thông tin, ban ngu vl";
        break;
  }
}*/

//Cách 2
int main(){
    int i,j,ngay, thang;
    cout<<"Nhap ngay, thang sinh cua ban: ";
    cin>>ngay>>thang;
    if(thang==1){
        if( ngay<=19 && ngay>0){
            cout<<"ban sinh ngay " <<ngay<<" thang "<<thang<<"\nban thuoc cung ma ket";
        }
        else if (ngay>19 && ngay <=31){
            cout<<"ban sinh ngay " <<ngay<<" thang "<<thang<<"\nban thuoc cung bao binh";
        }
        else{
            cout<<"khong co ngay ma ban nhap, ban ngu vl";
        }
    }
    cout<<"\n\nCac thang sau tuong tu. HUHU tai no dai qua";
}

