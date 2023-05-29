## Setting up

    git clone --recursive git@github.com:sgnoohc/vvv0lep.git
    cd vvv0lep/
    source setup.sh
    cd rooutil/ && make -j && cd ../ # do this once
    make -j

## Two fat-jet

    ./run.py
    ./merge.py
    ./plot_2fj.py

## Three fat-jet

    ./run.py
    ./merge.py
    ./abcd_3fj.py
    ./plot_3fj.py
