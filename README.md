

    git clone --recursive git@github.com:sgnoohc/vvv0lep.git
    cd vvv0lep/
    source setup.sh
    cd rooutil/ && make -j && cd ../ # do this once
    make -j
    ./doAnalysis -i /ceph/cms/store/user/phchang/VVV0LepAnalysis/VVV0TreeDebug/debug_www.root -t t -d
    python3 plot.py
