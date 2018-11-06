##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=fractal
ConfigurationName      :=Debug
WorkspacePath          :=C:/Users/belee/Desktop/study/fractal/fractal
ProjectPath            :=C:/Users/belee/Desktop/study/fractal/fractal/fractal
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=belee
Date                   :=06/11/2018
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :=C:/MinGW/bin/g++.exe
SharedObjectLinkerName :=C:/MinGW/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="fractal.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=C:/MinGW/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:/MinGW/bin/ar.exe rcu
CXX      := C:/MinGW/bin/g++.exe
CC       := C:/MinGW/bin/gcc.exe
CXXFLAGS := -std=c++11 -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/MinGW/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/RGB.cpp$(ObjectSuffix) $(IntermediateDirectory)/FractalCreator.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/Bitmap.cpp$(ObjectSuffix) $(IntermediateDirectory)/ZoomList.cpp$(ObjectSuffix) $(IntermediateDirectory)/Mandelbrot.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "./Debug"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Debug"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/RGB.cpp$(ObjectSuffix): RGB.cpp $(IntermediateDirectory)/RGB.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/belee/Desktop/study/fractal/fractal/fractal/RGB.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/RGB.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/RGB.cpp$(DependSuffix): RGB.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/RGB.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/RGB.cpp$(DependSuffix) -MM RGB.cpp

$(IntermediateDirectory)/RGB.cpp$(PreprocessSuffix): RGB.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/RGB.cpp$(PreprocessSuffix) RGB.cpp

$(IntermediateDirectory)/FractalCreator.cpp$(ObjectSuffix): FractalCreator.cpp $(IntermediateDirectory)/FractalCreator.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/belee/Desktop/study/fractal/fractal/fractal/FractalCreator.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/FractalCreator.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/FractalCreator.cpp$(DependSuffix): FractalCreator.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/FractalCreator.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/FractalCreator.cpp$(DependSuffix) -MM FractalCreator.cpp

$(IntermediateDirectory)/FractalCreator.cpp$(PreprocessSuffix): FractalCreator.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/FractalCreator.cpp$(PreprocessSuffix) FractalCreator.cpp

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/belee/Desktop/study/fractal/fractal/fractal/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/Bitmap.cpp$(ObjectSuffix): Bitmap.cpp $(IntermediateDirectory)/Bitmap.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/belee/Desktop/study/fractal/fractal/fractal/Bitmap.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Bitmap.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Bitmap.cpp$(DependSuffix): Bitmap.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Bitmap.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Bitmap.cpp$(DependSuffix) -MM Bitmap.cpp

$(IntermediateDirectory)/Bitmap.cpp$(PreprocessSuffix): Bitmap.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Bitmap.cpp$(PreprocessSuffix) Bitmap.cpp

$(IntermediateDirectory)/ZoomList.cpp$(ObjectSuffix): ZoomList.cpp $(IntermediateDirectory)/ZoomList.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/belee/Desktop/study/fractal/fractal/fractal/ZoomList.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/ZoomList.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/ZoomList.cpp$(DependSuffix): ZoomList.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/ZoomList.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/ZoomList.cpp$(DependSuffix) -MM ZoomList.cpp

$(IntermediateDirectory)/ZoomList.cpp$(PreprocessSuffix): ZoomList.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/ZoomList.cpp$(PreprocessSuffix) ZoomList.cpp

$(IntermediateDirectory)/Mandelbrot.cpp$(ObjectSuffix): Mandelbrot.cpp $(IntermediateDirectory)/Mandelbrot.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/belee/Desktop/study/fractal/fractal/fractal/Mandelbrot.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Mandelbrot.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Mandelbrot.cpp$(DependSuffix): Mandelbrot.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Mandelbrot.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Mandelbrot.cpp$(DependSuffix) -MM Mandelbrot.cpp

$(IntermediateDirectory)/Mandelbrot.cpp$(PreprocessSuffix): Mandelbrot.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Mandelbrot.cpp$(PreprocessSuffix) Mandelbrot.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


