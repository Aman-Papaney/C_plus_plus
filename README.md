# Learning C++
This repository is dedicated to learning and practicing C++ programming.

####  Clone this repository to your local machine:

   ```bash
   git clone https://github.com/Aman-Papaney/cpp-learning.git 
   ```

For this repository i have used a used a custom c++ build in Sublime Text 3.

```
{
    "shell_cmd": "g++ -std=c++11 -Wall \"${file}\" -o \"${file_path}/${file_base_name}\" && \"${file_path}/${file_base_name}\"",
    "file_regex": "^(..[^:]*):([0-9]+):?([0-9]+)?:? (.*)$",
    "working_dir": "${file_path}",
    "selector": "source.c++, source.cpp, source.cc, source.cxx",

    "variants":
    [
        {
            "name": "Custom C++",

            "windows":{
                "shell_cmd":   "g++ -std=c++14 -Wall \"${file}\" -o \"${file_path}${file_base_name}\" && start cmd /k  $file_base_name "
                
            },

            "shell": true,
        },
    ]
}
```
