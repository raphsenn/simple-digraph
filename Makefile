
CXX = clang++ -std=c++17
TEST_LIBS = -lgtest -lgtest_main


compile: digraphTest 

%.o: %.cpp %.h
	$(CXX) -c $<

%Test: %Test.o %.o
	$(CXX) -o $@ $^ $(TEST_LIBS)

test:
	./digraphTest

clean:
	rm -f *.o
	rm -f digraphTest