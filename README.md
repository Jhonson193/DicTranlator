# DicTranlator QT&&C++

1.Introduction: This is an app that can achieve simple translation and the function of notebook.

2.Runtime Environment: Windows 10, Qt Creator 7.0.1 (Community)

3.General Design and functions

1)Translator

<img src="https://user-images.githubusercontent.com/97960328/176410874-20aa5518-d903-4eb2-b94b-27021dd00b7f.png" height=50% width=50% />
<img src="https://user-images.githubusercontent.com/97960328/176410947-7292d6a9-ca9f-491f-811b-f18c22cf51e2.png" height=50% width=50% />
<img src="https://user-images.githubusercontent.com/97960328/176410960-d75230f6-86c0-4011-814a-4f4f4c5eee8a.png" height=50% width=50% />


i)By using Baidu Fanyi API, we are able to achieve the function of translation.

<img src="https://user-images.githubusercontent.com/97960328/176411133-97ee2310-979e-44f9-b7f6-9e0ebf12cbe8.png" height=10% width=10% />                                 <img src="https://user-images.githubusercontent.com/97960328/176411152-6ac6cb00-113e-4f97-8d86-e728242aeb89.png" height=10% width=10% />

ii)Thanks to the API, the translator that we are building is able to translate multiple different languages. Also it can automatically determine the language of the text to be translated.

<img src="https://user-images.githubusercontent.com/97960328/176417307-3591cf44-9c3d-4b36-bbda-d8721acfd399.png" height=50% width=50% />
<img src="https://user-images.githubusercontent.com/97960328/176417336-2d43bd4b-bd42-4d64-bb51-5a417b324a26.png" height=50% width=50% />


iii)Also, with such big amount of languages, we are capable of changing the structure of an essay to reduce plagiarism, by repeatedly translating the essay from one language to another. Higher the reduce level is, more times the essay will be translated.

<img src="https://user-images.githubusercontent.com/97960328/176417371-938377c6-054b-4ef5-824a-33726d681713.png" height=50% width=50% />

<img src="https://user-images.githubusercontent.com/97960328/176417384-5fc3c7a9-4c8e-4bfb-93b8-34ac9e2e91fa.png" height=50% width=50% />


iv)Other than typing manually, text files can be directly input into the translator to translate. Similarly, translation result can be output with user-specified name and location.

v) To cover a larger range of users, we offer a language setting where users can choose between Chinese and English interfaces with Chinese as the default choice.

2) Dictionary

   ①login for personal database.
   
   To save the data of every user, I used mysql to create account number when user register successfully. After logining, the operation of user will be saved. For instance, when user try to add word to personal library, the word can be saved and seen. 

<img src="https://user-images.githubusercontent.com/97960328/176417832-62dd481a-98cd-49f3-b9ed-4a0fa5b74391.png" height=50% width=50% />

②some word libraries
	
  By using the mysql, the libraries are successfully viewed in the UI. Every user can open it and try to memory, test the words. More databases can be used and user can catch sight of more different libraries. Besides, in the future, more functions about libraries will be excavate.

<img src="https://user-images.githubusercontent.com/97960328/176417899-7fe8fba4-517f-48e2-8ffb-08dbacb182d2.png" height=50% width=50% />

③Personal library

<img src="https://user-images.githubusercontent.com/97960328/176417925-baf0afd2-fb58-449b-a7cb-0d1e79028c4b.png" height=50% width=50% />

④obtain the data
  We can obtain the data from all users. For instance, we can see there frequency of word search, and finally saving as chart.
  <img src="https://user-images.githubusercontent.com/97960328/176418188-ba9b3931-6a06-4fbf-8a2f-553eea700376.png" height=10% width=10% />
  
  <img src="https://user-images.githubusercontent.com/97960328/176418200-971b28c6-e1d4-4dc3-a77b-d06fbea91be3.png" height=50% width=50% />
  <img src="https://user-images.githubusercontent.com/97960328/176418224-49224e51-3639-4d2a-99ef-768d1ee4979a.png" height=50% width=50% />

⑤text edit（quick note）

  <img src="https://user-images.githubusercontent.com/97960328/176418252-d3f20210-9107-471d-aa69-5ff85865827b.png" height=50% width=50% />
  <img src="https://user-images.githubusercontent.com/97960328/176418283-649e6059-47e9-4758-baf9-7021faa169b5.png" height=50% width=50% />
  <img src="https://user-images.githubusercontent.com/97960328/176418301-5d84e68a-7369-41ba-8cc8-d2514e1e3a34.png" height=50% width=50% />

3) Notepad
  <img src="https://user-images.githubusercontent.com/97960328/176418333-9c085848-5c9b-4296-b0f5-749809e98bd0.png" height=50% width=50% />
  
  <img src="https://user-images.githubusercontent.com/97960328/176418414-856552cd-c0b2-4ca2-9806-ddb012879948.png" height=50% width=50% />

  The picture showed above is the window of notepad, the default language is set in English. And we set three menu bar on the top—file, edit and language. What’s more, we add various action on the different menu bars. And this notepad support bilingual.
  
  For beautifying the window, I add the tool bars below the menu bars with corresponding icon. Moreover, when these icon are clicked, the corresponding action will carry out.
  
  
<img src="https://user-images.githubusercontent.com/97960328/176418478-97a85190-36f8-4020-b914-e04963338979.png" height=50% width=50% />
4)UI design
(a)The login surface
<img src="https://user-images.githubusercontent.com/97960328/176418537-21483584-0948-44db-ab9b-5a46cccb2674.png" height=50% width=50% />

(b)The user surface

<img src="https://user-images.githubusercontent.com/97960328/176418584-dab60ed4-91b4-4db5-90ab-2672496455b7.png" height=50% width=50% />










