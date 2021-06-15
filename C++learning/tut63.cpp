//templates or parameterized classes
//parameter is which datatype to use.
/*
class->object
object ke liye class is a template
template->class
class ke liye template is template
*/

/*
class vector{
    int *arr;
    int size;
    public:
        ->vecInt
        ->vecFloat
        ->vecDouble
        ->vecChar
}
code is not reusable!!!!
*/
/*
Why use templates?
->DRY principle(do not repeat urself principle violates)
->generic programming(for any datatype)
*/
/*
SYNTAX:
//T can be int ,float,char etc.
//represents many classes
//competitive coding uses templates and STL
template <class T>
class vector{
    T* arr;  
    public:
        vector(T*ar){
            //code
        } 
    //other methods
}
int main(){
    vector<int>myvec(ptr);
    vector<float>myfvec(ptr);
}
*/
