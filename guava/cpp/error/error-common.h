//
// Created by Patrick on 10/6/2023.
//

#ifndef GUAVA_ERROR_COMMON_H
#define GUAVA_ERROR_COMMON_H

#define PARSE_ERROR(msg) throw std::runtime_error(msg)

#define NOT_IMPLEMENTED throw std::runtime_error("This Guava feature is not Implemented!");

#define OVER_CONSTRAINT_ERROR(msg) DEBUGOUT << "OVER CONSTRAINT ERROR" << ENDL; throw std::runtime_error(msg);

#endif //GUAVA_ERROR_COMMON_H
