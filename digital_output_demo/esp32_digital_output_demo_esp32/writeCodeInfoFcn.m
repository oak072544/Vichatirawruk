% Autogenerated file: Thu Aug 18 08:43:58 2022
function writeCodeInfoFcn


% Load a ComponentInterface object from IR
codeIRInfoStruct = load('tlc\codeIRInfo.mat');
codeInfo = codeIRInfoStruct.codeInfo;

prmIdxMap = containers.Map;




wr = coder.internal.writeDataInterfacesToCodeDescriptor("esp32_digital_output_demo",pwd) ;
wr.writeName(codeInfo.Name);



skippedParameters = [];




            
            
            
            










            tmpArgs         = [];
    tmpActualArgs   = [];
    tmpRet          = coder.types.Argument.empty;
    tmpActualReturn = RTW.DataInterface.empty;


    func_Initialize_Prototype = coder.types.Prototype;
    func_Initialize_Prototype.Arguments  = tmpArgs;
    func_Initialize_Prototype.Return     = tmpRet;

        func_Initialize_Prototype.HeaderFile = 'esp32_digital_output_demo.h';
    func_Initialize_Prototype.SourceFile = 'esp32_digital_output_demo.c';

    func_Initialize_Interface = RTW.FunctionInterface;
    func_Initialize_Interface.Prototype    = func_Initialize_Prototype;
    func_Initialize_Interface.ActualArgs   = tmpActualArgs;
    func_Initialize_Interface.ActualReturn = tmpActualReturn;

        func_Initialize_Prototype.Name = 'esp32_digital_output_demo_initialize';
    time_constant = codeInfo.TimingProperties(getIndexFromTimingInternalId(codeInfo.TimingInternalIds, -1));
        func_Initialize_Interface.Timing = time_constant;
        codeInfo.InitializeFunctions =  [codeInfo.InitializeFunctions, func_Initialize_Interface'];
        func_Initialize_Interface.IsInitializeFunction = true;

                            tmpArgs         = [];
    tmpActualArgs   = [];
    tmpRet          = coder.types.Argument.empty;
    tmpActualReturn = RTW.DataInterface.empty;


            





    func_OutputUpdate_Prototype = coder.types.Prototype;
    func_OutputUpdate_Prototype.Arguments  = tmpArgs;
    func_OutputUpdate_Prototype.Return     = tmpRet;

        func_OutputUpdate_Prototype.HeaderFile = 'esp32_digital_output_demo.h';
    func_OutputUpdate_Prototype.SourceFile = 'esp32_digital_output_demo.c';

    func_OutputUpdate_Interface = RTW.FunctionInterface;
    func_OutputUpdate_Interface.Prototype    = func_OutputUpdate_Prototype;
    func_OutputUpdate_Interface.ActualArgs   = tmpActualArgs;
    func_OutputUpdate_Interface.ActualReturn = tmpActualReturn;

            func_OutputUpdate_Prototype.Name = 'esp32_digital_output_demo_step';
    time_0 = codeInfo.TimingProperties(getIndexFromTimingInternalId(codeInfo.TimingInternalIds, 0));
        func_OutputUpdate_Interface.Timing = time_0;
        codeInfo.OutputFunctions =  [codeInfo.OutputFunctions, func_OutputUpdate_Interface'];

                    
                


                tmpArgs         = [];
    tmpActualArgs   = [];
    tmpRet          = coder.types.Argument.empty;
    tmpActualReturn = RTW.DataInterface.empty;


    func_Terminate_Prototype = coder.types.Prototype;
    func_Terminate_Prototype.Arguments  = tmpArgs;
    func_Terminate_Prototype.Return     = tmpRet;

        func_Terminate_Prototype.HeaderFile = 'esp32_digital_output_demo.h';
    func_Terminate_Prototype.SourceFile = 'esp32_digital_output_demo.c';

    func_Terminate_Interface = RTW.FunctionInterface;
    func_Terminate_Interface.Prototype    = func_Terminate_Prototype;
    func_Terminate_Interface.ActualArgs   = tmpActualArgs;
    func_Terminate_Interface.ActualReturn = tmpActualReturn;

    time_constant = codeInfo.TimingProperties(getIndexFromTimingInternalId(codeInfo.TimingInternalIds, -1));
        func_Terminate_Interface.Timing = time_constant;
                func_Terminate_Prototype.Name = ['esp32_digital_output_demo_terminate'];
        codeInfo.TerminateFunctions =  [codeInfo.TerminateFunctions, func_Terminate_Interface'];


    




            % Opaque Data Type
            type_RTModel  = coder.types.Opaque;
            type_RTModel.Identifier = 'RT_MODEL_esp32_digital_output_T';
            

        % Pointer Type: Pointer to type_RTModel
        Ptrtype_RTModel_1_0 = coder.types.Pointer;
            Ptrtype_RTModel_1_0.BaseType = type_RTModel;
        Ptrtype_RTModel_1_0.ReadOnly = 1;
        Ptrtype_RTModel_1_0.Volatile = 0;
        




        % Variable: Var_RTModel
        Var_RTModel = RTW.Variable(Ptrtype_RTModel_1_0.BaseType, 'esp32_digital_output_demo_M_');
        Var_RTModel.Owner           = 'esp32_digital_output_demo';
        Var_RTModel.DeclarationFile = 'esp32_digital_output_demo.h';
            Var_RTModel.DefinitionFile  = 'esp32_digital_output_demo.c';
        

        % Pointer Variable: PtrVar_RTModel
        PtrVar_RTModel = RTW.PointerVariable(Ptrtype_RTModel_1_0, 'esp32_digital_output_demo_M', Var_RTModel);
        
        PtrVar_RTModel.Owner = Var_RTModel.Owner;
            PtrVar_RTModel.DeclarationFile = Var_RTModel.DeclarationFile;
            PtrVar_RTModel.DefinitionFile = Var_RTModel.DefinitionFile;

        % Data Interface: idata_RTModel
            empty_timing = RTW.TimingInterface.empty;
        idata_RTModel = RTW.DataInterface('', 'RTModel', PtrVar_RTModel, empty_timing);
        









    















if ~isempty(skippedParameters)
wr.removeSkippedParameters(codeInfo.Parameters(skippedParameters));
codeInfo.Parameters(skippedParameters) = [];
end

        codeInfo.InternalData = [codeInfo.InternalData, idata_RTModel];
    wr.addInternalData(idata_RTModel);

% Handling Right-Click Builds
ss = rtwprivate('getSourceSubsystemHandle',codeInfo.GraphicalPath);
% Check if Rt-Click build, then re-map SIDs
if ~isempty(ss) && rtwprivate('rtwattic','hasSIDMap')
codeInfo = modifyCodeInfoForSubsystemBuild(ss, codeInfo, wr);
end

wr.writeFunctionInterfaces(codeInfo);
wr.writeServerCallPoints(codeInfo);



wr.closeRepo();
    if exist('expInports', 'var')
    save codeInfo.mat codeInfo expInports;
    else
    save codeInfo.mat codeInfo;
    end
returnVal = 1;

% End Function: writeCodeInfoFcn

function data = uniquifyDataAccess(list)
data = RTW.DataInterface.empty;
for idx=1:numel(list)
if ~isPresentDI(data, list(idx))
data(end+1) = list(idx); %#ok<AGROW>
end
end
% End Function: uniquifyDataAccess

function isPresent = isPresentDI(list, di)
isPresent = false;
for idx = 1:numel(list)
if isequal(list(idx), di)
isPresent = true;
break
end
end

function idx = getIndexFromTimingInternalId(internalIdVec, internalId)
idx = find(internalIdVec == internalId);
if (isempty(idx) || (length(idx) > 1))
ciMsg = 'Time object cannot be empty';
ciExc = MException('RTW:buildProcess:CodeInfoInternalError',ciMsg);
throw(ciExc);
end
% End Function: getIndexFromTimingInternalId

function checkDataGraphicalNames(ciName, rtwName)
if (strcmp(ciName, rtwName) ~= 1)
ciMsg = ['Name mismatch: ', ciName, ' and ', rtwName];
ciExc = MException('RTW:buildProcess:CodeInfoInternalError',ciMsg);
throw(ciExc);
end
% End Function: checkDataGraphicalNames

function iData = getInternalDataByName(iDataVec, iDataName)
iData = RTW.DataInterface.empty;
for idxData = 1:numel(iDataVec)
if strcmp(iDataName, iDataVec(idxData).GraphicalName)
iData(end+1) = iDataVec(idxData);
break
end
end
if (isempty(iData) || (length(iData) > 1))
ciMsg = 'Internal Data object cannot be empty';
ciExc = MException('RTW:buildProcess:CodeInfoInternalError',ciMsg);
throw(ciExc);
end
% End Function: getInternalDataByName

function iData = getInternalDataByVariableName(iDataVec, iDataVariableName)
iData = RTW.DataInterface.empty;
for idxData = 1:numel(iDataVec)
if strcmp(iDataVariableName, iDataVec(idxData).Implementation.VariableName)
iData = iDataVec(idxData);
break
end
end
if isempty(iData)
ciMsg = 'Internal Data object cannot be empty';
ciExc = MException('RTW:buildProcess:CodeInfoInternalError',ciMsg);
throw(ciExc);
end
% End Function: getInternalDataByVariableName

function codeInfo = modifyCodeInfoForSubsystemBuild(ss, codeInfo, wr)
    % Extract Subsystem Build Map from AtticData
    Subsystem_Build_Mapping = rtwprivate('rtwattic','getSIDMap');

    % Parameters
    for i = 1:length(codeInfo.Parameters)
    sid = codeInfo.Parameters(i).SID;

    sid = Simulink.ID.getSubsystemBuildSID(sid,ss, Subsystem_Build_Mapping);
    wr.updateSIDForSubsystemBuild("Parameter", i, sid, codeInfo.Parameters(i));
    codeInfo.Parameters(i).SID = sid;
    end

    % Data Stores
    for i = 1:length(codeInfo.DataStores)
    sid = codeInfo.DataStores(i).SID;

    sid = Simulink.ID.getSubsystemBuildSID(sid,ss, Subsystem_Build_Mapping);
    codeInfo.DataStores(i).SID = sid;
    wr.updateSIDForSubsystemBuild("DataStore", i, sid);

    end

    % Inports
    for i = 1:length(codeInfo.Inports)
    sid = codeInfo.Inports(i).SID;

    sid = Simulink.ID.getSubsystemBuildSID(sid,ss, Subsystem_Build_Mapping);
    codeInfo.Inports(i).SID = sid;
    wr.updateSIDForSubsystemBuild("Inport", i, sid);

    end

    % Outports
    for i = 1:length(codeInfo.Outports)
    sid = codeInfo.Outports(i).SID;

    sid = Simulink.ID.getSubsystemBuildSID(sid,ss, Subsystem_Build_Mapping);
    codeInfo.Outports(i).SID = sid;
    wr.updateSIDForSubsystemBuild("Outport", i, sid);

    end

