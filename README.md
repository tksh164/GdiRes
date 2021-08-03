# GdiRes

[![Open in Visual Studio Code](https://open.vscode.dev/badges/open-in-vscode.svg)](https://open.vscode.dev/tksh164/GdiRes)

This tool shows the count of handles to GUI objects in use by the specified process.

## Usage

```
GdiRes.exe <PID>
```

```
> .\GdiRes.exe 11392
PID: 11392
GDI Objects: 2200
USER Objects: 1331
```

## Building from source

Run the **nmake** in the Visual Studio's Developer PowerShell or Developer Command Prompt.

```
nmake build
```

## License

Copyright (c) 2017-present Takeshi Katano. All rights reserved. This software is released under the [MIT License](https://github.com/tksh164/GdiRes/blob/master/LICENSE).

Disclaimer: The codes stored herein are my own personal codes and do not related my employer's any way.
