(function(){
  const btn = document.getElementById('toggleTheme');
  const root = document.documentElement;
  function applyTheme(t){
    if(t==='dark') root.classList.add('dark'); else root.classList.remove('dark');
  }
  const saved = localStorage.getItem('theme') || 'light';
  applyTheme(saved);
  btn.addEventListener('click', ()=>{
    const cur = root.classList.contains('dark') ? 'dark' : 'light';
    const next = cur==='dark' ? 'light' : 'dark';
    applyTheme(next);
    localStorage.setItem('theme', next);
  });
})();
