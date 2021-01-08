# GdiRes

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
