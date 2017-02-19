﻿#ifndef LRU_CACHE_H
#define LRU_CACHE_H
#include <list>
#include <data_class.h>
#include <memory>
#include <time.h>
#include <stdio.h>

class LRU_Cache
{
private:
//    In the worst situation, that cache has O(n)



   std::list<std::pair<int,std::shared_ptr<Data_class>>> main_cache;
   int m_cache_size;                                                    //declared size of cache
   int m_idElem;                                                        //identefication number of element inside cache
public:
    LRU_Cache(int);
    void add_data(int , Data_class&);
    void remove_data();
    void show_cache();
    Data_class call_data(int);

};

#endif // LRU_CACHE_H
