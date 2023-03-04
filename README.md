## About

This project was about recoding some containers from the STL.

In order to succeed, a good comprehension of how **templates**, **iterators**, **containers** and 
**algorithms** work was necessary. STL is not allowed. 

Here are the specificities of the five containers:

- :arrow_right: **Vector:** a dynamic array that allows insertion at the end of the container. Elements can be easily access thanks with the corresponding index, but it's not the most optimal container if a lot of insertion / deletion are needed.
- :arrow_right: **List:** a circular linked list (with a neutral node linking beginning and end of the list). Better than vector for inserting or deleting elements.
- :arrow_right: **Stack:** a container adaptator (LIFO, last in first out).
- :arrow_right: **Map:** a sorted container using an AVL binary tree (auto-equilibrates itself to optimize the time to find a value in the tree), in order to store the datas like in a dictionnary (a key associated to its value).

All my containers use an allocator to manage properly their memory, iterators to access their datas, and handle the same constructors / methods than the containers from the STL in C++98.

## Tester

In mains folder you can find "mine.cpp" and "stl.cpp", this files include many tests on each of the four containers my STL and original STL respectively.
