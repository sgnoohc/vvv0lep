echo "plotting..."
./plot1DScan.py higgsCombineTest.MultiDimFit.mH125.root \
    --main-label "Total Uncert."  \
    --output breakdown --y-max 10 --y-cut 40
