/**
  * String s1 = "hello"; String s2 = "hello"; both s1, s2 will point to same address in heap[interning] in c++ and java? Find out?
  * == always compares addresses while equals() compares contents so always use equals() for comparision
  * String s3= new String("hello") is created on heap directly and s1 and s3 have different addresses.
  * String in immutable coz it will break interning but lead to performance hit when editing strings as we have to copy existing 
    string to new one. e.g String s= "-"; for(int i=0;i<10;i++) s+=i; lead to each time copying existing s to new s, 
    leading to O(N^2) complexity
*/