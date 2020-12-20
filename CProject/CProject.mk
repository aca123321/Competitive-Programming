##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=CProject
ConfigurationName      :=Debug
WorkspacePath          :=C:/Users/isamu/Desktop/Aca/cp
ProjectPath            :=C:/Users/isamu/Desktop/Aca/cp/CProject
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=isamu
Date                   :=23/02/2020
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :=C:/Strawberry/c/bin/g++.exe
SharedObjectLinkerName :=C:/Strawberry/c/bin/g++.exe -shared -fPIC
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
ObjectsFileList        :="CProject.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=C:/Strawberry/c/bin/windres.exe
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
AR       := C:/Strawberry/c/bin/ar.exe rcu
CXX      := C:/Strawberry/c/bin/g++.exe
CC       := C:/Strawberry/c/bin/gcc.exe
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/Strawberry/c/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/hello.cpp$(ObjectSuffix) $(IntermediateDirectory)/pract.cpp$(ObjectSuffix) 



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
$(IntermediateDirectory)/hello.cpp$(ObjectSuffix): hello.cpp $(IntermediateDirectory)/hello.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/isamu/Desktop/Aca/cp/CProject/hello.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/hello.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/hello.cpp$(DependSuffix): hello.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/hello.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/hello.cpp$(DependSuffix) -MM hello.cpp

$(IntermediateDirectory)/hello.cpp$(PreprocessSuffix): hello.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/hello.cpp$(PreprocessSuffix) hello.cpp

$(IntermediateDirectory)/pract.cpp$(ObjectSuffix): pract.cpp $(IntermediateDirectory)/pract.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/isamu/Desktop/Aca/cp/CProject/pract.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/pract.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/pract.cpp$(DependSuffix): pract.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/pract.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/pract.cpp$(DependSuffix) -MM pract.cpp

$(IntermediateDirectory)/pract.cpp$(PreprocessSuffix): pract.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/pract.cpp$(PreprocessSuffix) pract.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


