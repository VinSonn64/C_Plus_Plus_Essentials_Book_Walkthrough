class Point{ //class header, contains name of class and keyword class
	int xVal, yVal; //has data members, automaticall set to private

public://this sets the following functions and statements to be public can be accessed more easily

	//Constructors
	//Allows you to Define and initialize objects of a class, always has the same name as the class
	Point(int, int);
	//can be multiple constructors
	Point(double, double);  //polar coordinates
	Point(void); //origin

	~Point();//Destructor, cleans up objects, useful if there are pointers
	void SetPt(int, int);
	void OffsetPt(int, int);
	void OffsetPt2(int, int);
};
//Here in the Header, members and function are only declared, not defined
//The class bodies is in Chapter6Definition. There the functions and members are defined

//Scope Operator ::
//In this class it uses the scope operator to refer to the correct x and y members
class MyPoint{
public:
	MyPoint(int x, int y)  //Here the scope operator removes ambiguity
		//The program knows the x and y with the scope is the class' ,e,bers while the others are the arguments
	{
		MyPoint::x = x;
		MyPoint::y = y;
	}
private:
	int x, y;
};

//Member Initialization List
class MyPoint2{
public:
	int xVal, yVal;

	MyPoint2(const int x, const int y) : xVal(x), yVal(y) //Members can be initialized in this form as well instead of a constructor
	{
		//This is also the only way to intialize constant members and references
	}

};

//Things you can do with Classes
//You can make other classes as its members (Like Point classes to create a Rectangle Class)
//You can make an array of classes
//use the keyword struct instead of class to make the default accessibility to public instead of private
