

    git clone --recursive git@github.com:sgnoohc/vvv0lep.git
    cd vvv0lep/
    source setup.sh
    cd rooutil/ && make -j && cd ../ # do this once
    make -j
    ./run.py
    ./merge.py
    ./plot.py
