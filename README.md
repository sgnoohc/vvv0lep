## Setting up

    git clone --recursive git@github.com:sgnoohc/vvv0lep.git
    cd vvv0lep/
    source setup.sh
    cd rooutil/ && make -j && cd ../ # do this once
    cd fit/ && make -j && cd ../
    make -j

## Running

    sh bin/arun.sh
