#ifndef LINKDEF_H
#define LINKDEF_H 1

#include <vector>
#include <map>

#ifdef __CINT__

#pragma link off all classes;
#pragma link off all typedef;

#pragma link C++ class vector<vector<int> >+;
#pragma link C++ class vector<vector<vector<float> > >+;
#pragma link C++ class vector<vector<vector<int> > >+;

#endif

#endif
