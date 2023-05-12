

    git clone --recursive git@github.com:sgnoohc/vvv0lep.git
    cd vvv0lep/
    source setup.sh
    cd rooutil/ && make -j && cd ../ # do this once
    make -j
    ./run.py
    xargs.sh .jobs.txt
    ./merge.py
    xargs.sh .merge.txt
    python3 plot.py
