#!/usr/bin/env bash

CURRENT_DIR=$(pwd)

cd /tmp
git clone https://github.com/versatran01/mvimpact_acquire.git
cd mvimpact_acquire
PLATFORM=$(uname -i)
if [[ ${PLATFORM} == "x86_64" ]] ; then
    echo "Installing 64-bit version"
    cd x86-64
    sudo ./install_mvBlueFOX.sh
elif [[ ${PLATFORM} == "armv7l" ]]; then
    echo "Installing arm version"
    cd armv7l
    sudo ./install_mvBlueFOX_arm.sh
else
    echo "Unknown platform ${PLATFORM}"
fi

echo "Cleaning up..."
cd /tmp
rm -rf mvimpact_acquire
cd ${CURRENT_DIR}
echo "Done."
