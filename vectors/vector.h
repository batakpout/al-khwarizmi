/**
 Templates are particularly powerful in C++ because they are resolved at compile time
*/
template<typename T>
class Vector {

    private:
     int cs;
     int ms;
     T *arr;

    public:
    Vector(int capacity=1) {
        cs=0; // cs holds both size and index
        ms = capacity;
        arr = new T[ms];
    }
    
    //this can't have const, CTE
    void push_back(const T e) {
        if(cs == ms) { //full
          T *oldArr = arr;
          ms *= 2;
          arr = new T[ms];
          for(int i=0;i<cs;i++) {
            arr[i] = oldArr[i];
          }
          delete [] oldArr;
        }
        arr[cs++] = e;
    }

    T front() const {
        return arr[0];
    }

    T last() const {
        return arr[cs-1];
    }

   

    int capacity() const {
        return ms;
    }

    /**
     when a member function is declared as const, it promises not to modify any member variables
     of the class (except those explicitly marked as mutable). 
    */
    int size() const {
        return cs;
    }

    T at(const int i) const {
        return arr[i];
    }
    //operator overloading
    T operator[](const int i) const{
        //i--; CTE as int i is declared as const
        return arr[i];
    }

    void pop_back() {
        if(cs>0) {
            cs--;
        }
    }
     //when only 1 element in vector then cs = 1
    bool isEmpty() const {
        return cs == 0;
    }

};