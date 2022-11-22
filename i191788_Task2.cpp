#include<iostream>
using namespace std;

class WindowImp

{  
  public:
  string manufacture()
  {
  return "Window produced";
  }
};
class LinuxImp:public WindowImp
{ public:
	string name()
	{
	return" Linux produced";
	}
};
class MacImp:public WindowImp
{
public:
	string name()
	{
	return "Mac produced";
	}
};

class window
{
	public:
	string apply()
{
		WindowImp Win;
    cout<<"Window manufacture: "<<Win.manufacture();
	}
	public:
	string manufacture()
	 	{
	 return "Window produced   ";
		 }
};
 class MobileWin : public window
{
public:
	string manufacture()
	{
	 	return "Mobile window produced    ";
	 }
};
class DesktopWin: public window
{
	
	 public:
	 	string manufacture ()
	 	{
	 		return "Desktop Window produced    ";
	 	
		 }
		 
};


int main()
{
	LinuxImp L;
	MacImp M;
    cout<<"linux: "<<L.name();
    cout<<endl;
	cout<<"Mac: "<<M.name();
	 cout<<endl;
	window w;
	MobileWin a;
	DesktopWin b;
	cout<<"Window:"<< w.manufacture()<<endl;
	cout<< "Mobile Window: "<<a.manufacture()<<endl;
     cout<<"Desktop Window: " <<b.manufacture()<<endl;
	return 0;
}



