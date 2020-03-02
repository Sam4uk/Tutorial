# GitHub-Flavored Markdown

## Коротка інструкція

Абзаци створюються за допомогою постого рядка. Якщо навколо тексту згори та знизу присутні порожні рядки, то текст перетворюється в абзац.

Щоб зробити примусове перенесення рядка замість абзацу,  пітрібно поставити два пробіли на місці примусового розриву рядка.

Заголовки відмічені решіткою `#` на початку рядка. Є шість рівнів заголовків  
`#`,  `##`,  `###`,  `####`,  `#####`,  `######` 
Наприклад:

# Заголовок h1 #
## Заголовок h2
### Заголовок h3
#### Заголовок h4
##### Заголовок h5
###### Заголовок h6

Закінчувати "закривати" заголовок решіткою не обовʼязково, можна "для краси"

### Списки

Для розмітки ненумерованих списків можна користуватися або `*`, або `-`, або `+`:
- елемнт списку 1
- елемнт списку 2
- элемент N

Вкладені пункти багаторівневих спискув відділяються чотирма пробілами на початку рядка:
* пункт 1
* пункт 2
    * підпункт 1 пункту 2
    * підпункт 2 пункту 2
    * підпункт M пункту 2
* пункт N

Упорядоченный список:

1. Пункт 1
2. Пункт 2
    1. Вкладений
    2. Вкладений
3. Пункт 3
4. Donec sit amet nisl. Aliquam semper ipsum sit amet velit. Suspendisse id sem consectetuer libero luctus adipiscing.

На справді не важливо як пронумеровані пункти, важливо, щоб перед елементом списку стояла цифра будьяка з крапочкою (автонумерація:

0. Пункт 1
0. Пункт 2
0. Пункт 3
0. Пункт 4

Список з абзацами:

* Один абзац. Lorem ipsum dolor sit amet, consectetur adipisicing elit.

* Два абзац. Donec sit amet nisl. Aliquam semper ipsum sit amet velit. Suspendisse id sem consectetuer libero luctus adipiscing.

* Три абзац. Ea, quis, alias nobis porro quos laborum minus sed fuga odio dolore natus quas cum enim necessitatibus magni provident non saepe sequi?

    Чотири абзац (Чотиреи пробіли на початку або один таб).

### Цитати

Цитати офоррмлюються в "емейлах" з допомогою знаку `>`.

> This is a blockquote with two paragraphs. Lorem ipsum dolor sit amet,
> consectetuer adipiscing elit. Aliquam hendrerit mi posuere lectus.
> Vestibulum enim wisi, viverra nec, fringilla in, laoreet vitae, risus.
>
> Donec sit amet nisl. Aliquam semper ipsum sit amet velit. Suspendisse
> id sem consectetuer libero luctus adipiscing.

Або для більш лінивих, коли знак `>` ставиться перед кожним елементом цитати, чи то абзац, чи то заголовок або порожній рядок:

> This is a blockquote with two paragraphs. Lorem ipsum dolor sit amet,
consectetuer adipiscing elit. Aliquam hendrerit mi posuere lectus.
Vestibulum enim wisi, viverra nec, fringilla in, laoreet vitae, risus.
>
> Donec sit amet nisl. Aliquam semper ipsum sit amet velit. Suspendisse
id sem consectetuer libero luctus adipiscing.

Цитувати можна що побажається, навіть вкладені цитати:

> ## This is a header.
>
> 1.   This is the first list item.
> 2.   This is the second list item.
>
> > Вкладена цитати.
>
> Here's some example code:
>
>     return 0;

### Вихідний код

В чистому MarkDown блоки коду пишуться з 4 пробілами на початку кожного рядка.

Та в GitHub-Flavored Markdown (скорочення GFM) єбільш зручний спосіб: ставимо по три апострофа перед та після коду. Також можна вказати мову коду.

CPP
``` cpp
#include <iostream>
int main(){
    std::cout<<"Hello world!"<<std::endl;
    return 0;
}
```

HTML
```html
<nav class="nav nav-primary">
  <ul>
    <li class="tab-conversation active">
      <a href="#" data-role="post-count" class="publisher-nav-color" data-nav="conversation">
        <span class="comment-count">0 комментариев</span>
        <span class="comment-count-placeholder">Комментарии</span>
      </a>
    </li>
    <li class="dropdown user-menu" data-role="logout">
      <a href="#" class="dropdown-toggle" data-toggle="dropdown">
        <span class="dropdown-toggle-wrapper">
          <span>
            Войти
          </span>
        </span>
        <span class="caret"></span>
      </a>
    </li>
  </ul>
</nav>
```
Найприємніше, що в коді не потрібно зімінювати `< >` чи `&` на їх html-сущности.` на их html-сущности.

### inline код

Для вставки коду в речення його потрыбно обрамляти в апострофи. Пример: `const size_t k_const{25}`.

Якщо в кожі присутній апостроф, то код обрамляється двойним апострофом: ``There is a literal backtick (`) here.``

### Горизонтальна риска

`hr` створюється трьома зірочками `***` або  трьома дефісами `---`.

`***`
***

`---`
---

### Лінки

``
Вбудоване посилення  
`[Лінк з title елементом](http://example.com/link "Я є лінк на example.com")`  
матиме такий вигляд  
[Лінк з title елементом](http://example.com/link "Я є лінк на example.com").
Це ж саме, але без 
`[Лінк без title ](http://example.com/link )`  
матиме вигляд
[без title](http://example.com/link).

А вот [пример][1] [нескольких][2] [ссылок][id] с разметкой как у сносок. Прокатит и [короткая запись][] без указания id.

[1]: http://example.com/ "Optional Title Here"
[2]: http://example.com/some
[id]: http://example.com/links (Optional Title Here)
[короткая запись]: http://example.com/short

Вынос длинных урлов из предложения способствует сохранению читабельности исходника. Сноски можно располагать в любом месте документа.

### Emphasis

Выделять слова можно при помощи `*` и `_`. Одним символ для наклонного текста, два символа для жирного текста, три — для наклонного и жирного одновременно.

Например, это _italic_ и это тоже *italic*. А вот так уже __strong__, и так тоже **strong**. А так ***жирный и наклонный*** одновременно.

### Зачеркивание

В GFM добавлено зачеркивание текста: две тильды `~` до и после текста.

~~Зачеркнуто~~

## Картинки

Картинка без `alt` текста

![](//placehold.it/150x100)

Картинка с альтом и тайтлом:

![Alt text](//placehold.it/150x100 "Можно задать title")

Запомнить просто: синтаксис как у ссылок, только перед открывающей квадратной скобкой ставится восклицательный знак.

Картинки «сноски»:

![Картинка][image1]
![Картинка][image2]
![Картинка][image3]

[image1]: //placehold.it/250x100
[image2]: //placehold.it/200x100
[image3]: //placehold.it/150x100

Картинки-ссылки:

[![Alt text](//placehold.it/150x100)](http://example.com/)


## Использование HTML внутри Markdown

Mожно смешивать Markdown и HTML. Если на какие-то элементы нужно поставить классы или атрибуты, смело используем HTML:

> Выделять слова можно при помощи * и _ . Например, это <em class="a1">italic</em> и это тоже <i class="a1">italic</i>. А вот так уже <b>strong</b>, и так тоже <strong>strong</strong>.

Можно и наоборот, внутри HTML-тегов использовать Маркдаун.

<section class="someclass">

### Пример Маркдауна внутри HTML

Выделять слова можно при помощи `*` и `_` . Например, это _italic_ и это тоже *italic*. А вот так уже __strong__, и так тоже **strong**.

</section>

### Таблицы

В чистом Маркдауне нет синтаксиса для таблиц, а в GFM есть.

First Header  | Second Header
------------- | -------------
Content Cell  | Content Cell
Content Cell  | Content Cell

Для красоты можно и по бокам линии нарисовать:

| First Header  | Second Header |
| ------------- | ------------- |
| Content Cell  | Content Cell  |
| Content Cell  | Content Cell  |

Можно управлять выравниванием столбцов при помощи двоеточия.

| Left-Aligned  | Center Aligned  | Right Aligned |
|:------------- |:---------------:| -------------:|
| col 3 is      | some wordy text |     **$1600** |
| col 2 is      | centered        |         $12   |
| zebra stripes | are neat        |        ~~$1~~ |

Внутри таблиц можно использовать ссылки, наклонный, жирный или зачеркнутый текст.

Для всего остального есть обычный HTML.

        
        https://paulradzkov.com/2014/markdown_cheatsheet/