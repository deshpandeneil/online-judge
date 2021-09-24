# online-judge
This repository contains code for the event of Reverse Coding held during the techfest of Credenz 20' (21') in my college.

# Description
This project is similar to competitive coding platforms like codechef where the user submits their code and we run it on the server. The user's code is scored according to the number of test cases passed.

Here is a quick guide for installing this project on your PC and hosting it locally:

### 1. Cloning the project

clone the project by the following command:

    git clone https://github.com/deshpandeneil/online-judge.git

### 2. Creating virtual env and installing required packages

install python3-env and pip (if not already installed) for creating a virtual develpopment envirnoment.

    sudo apt-get install python3-venv python3-pip

create a virtual envirnoment:

    python3 -m venv env

activate the virtual envirnoment:

    source env/bin/activate

install all the required packages which are present in requirement.txt:

    pip install -r requirements.txt

install all the sandbox packages.

    sudo apt-get install autoconf libtool gpref
    python3 -m pip install cython
    git clone https://github.com/seccomp/libseccomp
    cd libseccomp
    make
    sudo make install
    cd src/python/
    python3 setup.py
    cd ../../..
    LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/usr/local/lib
    export LD_LIBRARY_PATH

You are almost Done!

### 3. Running the code Setting up timer and starting game

change directory and move into the cloned project.

    cd online-judge

Run this project by command:

    python3 manage.py runserver

hit the timer before starting, by appending the url(i.e. 127.0.0.1:8000) by "/timer/" in new tab and then by clicking on submit button, after clicking submit you should get "timer is set", come back to main page again and wait till the game start
