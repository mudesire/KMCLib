# 
#   Simple installer for unix 
#         tested on ubuntu-Wsl
#   Created Muhire Desire 
#   Licence MIT
#  Essential tools
sudo apt-get update -y
sudo apt-get install gedit  -y
sudo apt-get install build-essential -y
sudo apt-get install swig -y
sudo apt-get install python-dev -y

#  Make sure Python 2.7 is in this path

PYTHON27="/usr/include/python2.7"

KMCLIB_PATH = pwd
BUILDPATH = ${KMCLIB_PATH}/c++/build
EXTERNALS = ${KMCLIB_PATH}/c++/externals
cd ${EXTERNALS} 
make

# If ok 
cd ..

mkdir ${BUILDPATH}
cd ${BUILDPATH}
cmake -Wno-dev ..

make test.x
./unittest/test.x
make install

# Modify ~/.bashrc and add 

# Copy 
export PYTHONPATH=${KMCLIB_PATH}/python/src:${PYTHONPATH}

# Test install 
cd ${KMCLIB_PATH}

python KMCLib/python/unittest/utest.py






