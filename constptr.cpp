int sum=8;
int* p_sum = &sum;
const int* cp_sum =&sum;
//can you know changes
int* const p = &sum;
int p;
 /*   
    指针前面的类型声明表明指针指向对象的类型；
    第三个声明指出cp_sum指向一个const int类型的数据，代表不能通过*cp_sum = 6的形式来改变sum的值，
	也就是说声明了一个指向常量的指针，尽管sum不是常量，这也是可以的；cp_sum是可以改变的；
    最后一个声明，声明了一个指向int数据的指针，但这个指针变量本身是一个const类型，意为不能修改p所指向的对象；
	但可以修改p所指向对象的内容；  靠靠
*/
