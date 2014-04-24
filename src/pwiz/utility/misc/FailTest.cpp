// $Id: FailTest.cpp 4140 2012-11-22 01:07:16Z pcbrefugee $
//
// Licensed under the Apache License, Version 2.0 (the "License"); 
// you may not use this file except in compliance with the License. 
// You may obtain a copy of the License at 
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software 
// distributed under the License is distributed on an "AS IS" BASIS, 
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. 
// See the License for the specific language governing permissions and 
// limitations under the License.
//


#include <iostream>
using namespace std;

int main(int argc, const char* argv[])
{
    cerr << "This is a test of the emergency test failure system." << endl;
    cout << "DON'T PANIC!" << endl;
    cerr << "This is only a test." << endl;
    return 42;
}