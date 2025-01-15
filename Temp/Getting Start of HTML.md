### What is HTML?

- HTML stands for Hyper Text Markup Language.
- HTML is the standard markup language for web pages.
- HTML describes the structure of a web page.
- HTML consits of a series of elements.
- HTML elemts tell the browser how to display the content.
- HTML elements label pieces of content such as "this is a heading", "this is a paragraph", "this is a link", etc.

### A Simple HTML Document

> Example
> ```html
> <!DOCTYPE html>
> <html>
>    <head>
>        <title>Page Title</title>
>    </head>
>    <body>
>        <h1>My First Heading</h1>
>        <p>My First Paragraph</p>
>    </body>
> </html>
> ```

#### Example Explained

- The `<!DOCTYPE html>` declaration defines that this document is an HTML5 document
- The `<html>` element is the root element of an HTML page
- The `<head>` element contains meta information about the HTML page
- The `<title>` element specifies a title for the HTML page (which is shown in the browser's title bar or in the page's tab)
- The `<body>` element defines the document's bod, and is a container for all visible contents, such as headings, paragraphs, images, hyperlinks, tables, lists, etc.
- The `<h1>` element defines a large heading
- The `<p>` element defines a paragraph

#### What is an HTML Element?

An HTML element is defined by a start tag, some content, and an end tag:

```html
<tagname> Content goes here </tagname>
```

The HTML element is everything from the start tag to the end tag:

```html
<h1>My First Heading</h1>
<p>My First Paragraph</p>
```

> Note: Some HTML elements have no content (like the <br> element). These elements are called empty elements. Empty elements do not have an end tag!

### HTML Basic Examples

In this chapter we will show some basic HTML examples.

Don't worry if we use tags you have not learned about yet.

#### HTML Documents

ALL HTML documents must start with a document type declaration: `<!DOCTYPE html>`.

The HTML documents itself begins with `<html>` and ends with `</html>`.

The visible part of the HTML document is between `<body>` and `</body>`.

> Example
> ```html
> <!DOCTYPE html>
> <html>
>    <head>
>        <title>Page Title</title>
>    </head>
>    <body>
>        <h1>My First Heading</h1>
>        <p>My First Paragraph</p>
>    </body>
> </html>
> ```

#### The `<!DOCTYPE>` Declaration

The `<!DOCTYPE>` declaration represents the document type, and helps browsers to display web pages correctly.

It must only appear once, at the top of the page (before any HTML tags).

The `<!DOCTYPE>` declaration is not case sensitive.

The `<!DOCTYPE>` declaration for HTML5 is `<!DOCTYPE html>`

#### HTML Headings

HTML headings are defined with the `<h1>` to `<h6>` tags.

`<h1>` defines the most important heading. `<h6>` defines the least important heading:

```html
<!-- Example -->
<h1>This is heading 1</h1>
<h2>This is heading 2</h2>
<h3>This is heading 3</h3>
<h4>This is heading 1</h4>
<h5>This is heading 2</h5>
<h6>This is heading 3</h6>
```

#### HTML Paragraphs

HTML paragraphs are defined with the `<p>` tag:

```html
<!-- Example -->
<p>This is a paragraph.</p>
<p>This is another paragraph.</p>
```

#### HTML Links

HTML links are defined with the `<a>` tag:

```html
<a href="https://www.w3schools.com">This is a link</a>
```

The link's destination is specified in the `href` attribute.

Attributes are used to provide additional information about HTML elements.

#### HTML Images

HTML images are defined with the `<img>` tag.

The source file (`src`), alternative text (`alt`), `width`, and `height` are provided as attributes:

```html
<img src = "homo.jpg" alt="homo" width="114" height="514">
```


### HTML Forms

An HTML form is used to collect user input. The user input is most sent to a server for processing.

#### The `<form>` Element

The HTML `<form>` element is used to create an HTML form for user input:

```html
<form>
    elements
</form>
```

The `<form>` element is a container for different types of input elements, such as: text fields, chechboxes, radio buttons, submit buttons, etc.

