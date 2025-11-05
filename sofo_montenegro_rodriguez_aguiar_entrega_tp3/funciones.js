function preloadImages()
{
  var doc = document;
  if (doc.images)
  {
    if (!doc.imagesList)
    {
      doc.imagesList = new Array();
    }
    var j = doc.imagesList.length;
    var arguments = preloadImages.arguments;

    for (var i = 0; i < arguments.length; i++)
    {
      if (arguments[i].indexOf("#") != 0)
      {
        doc.imagesList[j] = new Image;
        doc.imagesList[j++].src = arguments[i];
      }
    }
  }
}

function swapImage()
{
  var j = 0;
  var pos;
  var args = swapImage.arguments;
  document.imagesListSource = new Array;

  for (var i = 0; i < (args.length - 2); i += 3)
  {
    if ((pos = findObj(args[i])) != null)
    {
      document.imagesListSource[j++] = pos;

      if (!pos.oSrc)
      {
        pos.oSrc = pos.src;
      }

      pos.src = args[i + 2];
    }
  }
}

function findObj(args, doc)
{
  var p, i, x;
  if (!doc) doc = document;

  if ((p = args.indexOf("?")) > 0 && parent.frames.length)
  {
    doc = parent.frames[args.substring(p + 1)].document;
    args = args.substring(0, p);
  }

  if (!(x = doc[args]) && doc.all)
  {
    x = doc.all[args];
  }

  for (i = 0; !x && i < doc.forms.length; i++)
  {
    x = doc.forms[i][args];
  }

  for (i = 0; !x && doc.layers && i < doc.layers.length; i++)
  {
    x = findObj(args, doc.layers[i].document);
  }

  if (!x && doc.getElementById)
  {
    x = doc.getElementById(args);
  }

  return x;
}

function showHideLayers()
{
  var i, visible, obj;
  var args = showHideLayers.arguments;

  for (i = 0; i < (args.length - 2); i += 3)
  {
    if (document.getElementById && ((obj = document.getElementById(args[i])) != null))
    {
      visible = args[i + 2];

      if (obj.style)
      {
        if (visible == 'show')
        {
          obj.style.visibility = 'visible';
          obj.style.display = 'flex';
        }
        else if (visible == 'hide')
        {
          obj.style.visibility = 'hidden';
          obj.style.display = 'none';
        }
        else
        {
          obj.style.visibility = visible;
        }
      }
    }
  }
}