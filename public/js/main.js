function $(s) { return document.querySelectorAll(s) }
for (const e of $('#controller [type="checkbox"]')){
  e.onchange = function() {
    // e.form.submit()
  }
}