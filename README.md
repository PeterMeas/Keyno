# Keyno
PASSWORD MANAGER IN DEVELOPMENT

## Prerequisites

Before building this project, you need to have:
- CMake (version 3.10 or higher)
- A C++ compiler supporting C++11
- OpenSSL (version 3 recommended)

### Installing Prerequisites

#### macOS
```bash
# Install Homebrew if you haven't already
/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"

# Install required packages
brew install cmake openssl@3
```

#### Ubuntu/Debian
```bash
sudo apt update
sudo apt install build-essential cmake libssl-dev
```

#### Fedora/RHEL
```bash
sudo dnf install gcc gcc-c++ cmake openssl-devel
```

#### Windows
1. Install Visual Studio with C++ support
2. Install CMake from https://cmake.org/download/
3. Install vcpkg and OpenSSL:
```batch
git clone https://github.com/Microsoft/vcpkg.git
cd vcpkg
bootstrap-vcpkg.bat
vcpkg install openssl:x64-windows
```

## Building the Project

1. Clone the repository:
```bash
git clone [your-repo-url]
cd Keyno
```

2. Create a build directory:
```bash
mkdir build
cd build
```

3. Configure and build:
```bash
cmake ..
cmake --build .
```

### Troubleshooting

If CMake can't find OpenSSL, you can specify its location manually:
```bash
cmake -DOPENSSL_ROOT_DIR=/path/to/openssl ..
```

Common OpenSSL paths:
- macOS (Apple Silicon): `/opt/homebrew/opt/openssl@3`
- macOS (Intel): `/usr/local/opt/openssl@3`
- Windows (vcpkg): `C:/dev/vcpkg/installed/x64-windows`