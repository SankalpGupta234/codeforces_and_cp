# Compiler
CXX = g++

# Flags: C++17, Optimization, Warnings, and Sanitizers (Safety checks)
CXXFLAGS = -std=c++17 -O2 -Wall -Wextra -Wshadow -fsanitize=address,undefined

# This magic rule allows you to type "make filename" to compile "filename.cpp"
%: %.cpp
	$(CXX) $(CXXFLAGS) $< -o $@