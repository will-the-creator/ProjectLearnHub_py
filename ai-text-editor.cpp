-when button clicked bring up screen ask to open a new (subtab)
-bring up ui 
--- [all actions include ui elements] 
-initialize screen (new folder) or (import folder)
--(import folder) use iosstream -check if the folder exists if:false show pop up false -if copy folder path and destination -when user input added to our (interactive element screen) --find new input --copy new input --add new input to file path destination
--(new folder) -create new file command -open (interactive element screen)
-(interactive element screen) --display interactive element screen ---connect to github api
-Class TextEditor:
    Properties:
        - document: string
        - cursorPosition: int
        - selectedText: string
        - syntaxHighlightingEnabled: boolean
        - autoIndentationEnabled: boolean
        - bracketMatchingEnabled: boolean
        - codeSnippets: map<string, string>
        - breakpoints: list<int>
        - versionControlSystem: VersionControlSystem
        - languageServer: LanguageServer
        - keyBindings: map<string, string>
        - lintingEnabled: boolean
        - externalTools: list<ExternalTool>
    
    Methods:
        - openDocument(filePath: string)
        - saveDocument(filePath: string)
        - closeDocument()
        - insertText(text: string)
        - deleteText(startIndex: int, endIndex: int)
        - moveCursorToPosition(position: int)
        - selectText(startIndex: int, endIndex: int)
        - cutSelectedText()
        - copySelectedText()
        - pasteClipboardText()
        - enableSyntaxHighlighting()
        - disableSyntaxHighlighting()
        - enableAutoIndentation()
        - disableAutoIndentation()
        - enableBracketMatching()
        - disableBracketMatching()
        - insertCodeSnippet(snippetName: string)
        - toggleBreakpoint(lineNumber: int)
        - commitChanges(message: string)
        - pushChanges()
        - pullChanges()
        - goToDefinition()
        - findReferences()
        - navigateToSymbol(symbol: string)
        - renameSymbol(newName: string)
        - refactorCode()
        - customizeKeyBindings(key: string, command: string)
        - enableLinting()
        - disableLinting()
        - executeTask(task: Task)
    
    Events:
        - documentOpened(filePath: string)
        - documentSaved(filePath: string)
        - documentClosed()
        - textInserted(text: string)
        - textDeleted(startIndex: int, endIndex: int)
        - cursorMoved(position: int)
        - textSelected(startIndex: int, endIndex: int)
        - breakpointToggled(lineNumber: int)
        - changesCommitted(message: string)
        - changesPushed()
        - changesPulled()
        - errorDetected(errorMessage: string)
        - taskExecuted(taskName: string)
    
Class VersionControlSystem:
    Methods:
        - commitChanges(message: string)
        - pushChanges()
        - pullChanges()
        - revertChanges()
    
Class LanguageServer:
    Methods:
        - analyzeCode(document: string)
        - provideAutoCompletion(position: int)
        - provideDefinition(position: int)
        - provideReferences(symbol: string)
        - provideDocumentation(symbol: string)
        - refactorCode()
    
Class ExternalTool:
    Properties:
        - name: string
        - executablePath: string
    
    Methods:
        - executeTask(task: Task)
    
Class Task:
    Properties:
        - name: string
        - command: string
        - arguments: list<string>
    
    Methods:
        - execute()
