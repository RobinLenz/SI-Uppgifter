#ifndef ARRAYCLASS
#define ARRAYCLASS

class ArrayClass
{
    private:
        int superArray[100];                            //Internal array to work with
        //Feel free to add private methods (or more variables) if needed

    public:
        ArrayClass();                                   //Constructor
        ~ArrayClass();                                  //Destructor (Does not need to be implemented)

        int getSize();                                  //Returns the number of elements currently in the array
        int getFree();                                  //Returns the number of remaining spots in the array

        bool addElement(int newElement);                //Adds a new number to the array
        void removeElement(int value);                  //Removes all elements that match value
        void removeAt(int index);                       //Removes the element at the given index
        
        bool merge(ArrayClass other);                   //Merge with another ArrayClass object by adding the value of each element in other to the corresponding element in the original array. Returns false if the current capacity is too low
        bool concatenate(ArrayClass other);             //Add all elements in other to the end of the original array. Returns false if the current capacity is too low

        void printArray();                              //Prints the array
        int getSum();                                   //Returns the sum of all elements in the array

        void testFunc();                                //Test function to check if compilation and linking works as expected. Feel free to remove this once you have made sure it all works
};

#endif