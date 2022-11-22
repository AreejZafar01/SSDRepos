#include<iostream>
using namespace std;

class billAmountTracker {
private:
	int BillAmount;
public:
	billAmountTracker(int BA)
	{
		this->BillAmount = BA;
	}
	int get_billAmountTracker()
	{
		return BillAmount;
	}
};
	class billApprovalchain {
	public:
		virtual void setNext(billApprovalchain* NextObj) = 0;
		virtual void billProcessor(billAmountTracker* Requestedamount) = 0;
	};

class Normal_CSR: public billApprovalchain {
private:
	billApprovalchain* NextObj;
public:
	void setNext(billApprovalchain* obj)
	{
		NextObj = obj;
	}
	void billProcessor(billAmountTracker* Req)
	{
		if (Req->get_billAmountTracker() <= 10 && Req->get_billAmountTracker() <= 50)
		{
			cout << "CSR Processing Amount $" << Req->get_billAmountTracker() << endl;
		}
		else
			NextObj->billProcessor(Req);	
	}
	
};
class Supervisor_CSR : public billApprovalchain {
private:
	billApprovalchain* NextObj;
public:
	void setNext(billApprovalchain* obj)
	{
		NextObj = obj;
	}
	void billProcessor(billAmountTracker* Req)
	{
		if (Req->get_billAmountTracker()>50 && Req->get_billAmountTracker() <= 100)
		{
			cout << "Supervisor CSR Processing Amount $" << Req->get_billAmountTracker() << endl;
		}
		else
			NextObj->billProcessor(Req);
	}

};
class SeniorSupervisor_CSR : public billApprovalchain {
private:
	billApprovalchain* NextObj;
public:
	void setNext(billApprovalchain* obj)
	{
		NextObj = obj;
	}
	void billProcessor(billAmountTracker* Req)
	{
		if (Req->get_billAmountTracker() > 100)
		{
			cout << "Senior Supervisor CSR Processing Amount $" << Req->get_billAmountTracker() << endl;
		}
		else
			cout<<"Error: No one is here to Handle the Session request";
	}

};
int main() {
	billApprovalchain* nObj= new Normal_CSR();
	billApprovalchain* sObj = new Supervisor_CSR();
	billApprovalchain* SensObj = new SeniorSupervisor_CSR();
	int n;
	cout << "Dear employee, Please enter the amount to reimburse: " << endl;
	cout << "Amount: $ ";
	cin >> n;
	nObj->setNext(sObj);
	sObj->setNext(SensObj);
	
	
	billAmountTracker* obj1 = new billAmountTracker(n);
	nObj->billProcessor(obj1);

	cout << "Amount $" << obj1->get_billAmountTracker() << "  has been processed" << endl;
	return 0;
}