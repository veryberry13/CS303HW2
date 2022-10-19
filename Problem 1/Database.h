#ifndef DATABASE_H_
#define DATABASE_H_

/** The class Database has methods that can display and manipulate an array of numbers */
class Database {
		public:
			void display(int* data, int array_size);
			
			int valuechecker(int checker, int* data, int array_size);

			int valuereplacer(int index, int value, int* data, int array_size);

			void append(int value, int*& data, int& size);

			void remove(int index, int*& data, int& size);

};
#endif	  


