#!/usr/bin/env bash

CURRENT_DIR=$(pwd)
REPO_NAME=mvimpact_acquire
CLONE_DIR=/tmp

cd ${CLONE_DIR}
git clone https://github.com/versatran01/${REPO_NAME}.git
cd ${REPO_NAME}
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
cd ${CLONE_DIR}
rm -rf ${REPO_NAME}
cd ${CURRENT_DIR}
echo "Done."
