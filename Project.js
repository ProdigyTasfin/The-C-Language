use pdf::file::File;  

pub fn parse_pdf(path: &str) -> String {  
    let file = File::open(path).unwrap();  
    let mut text = String::new();  
    for page in file.pages() {  
        if let Ok(p) = page {  
            text.push_str(&p.text().unwrap());  
        }  
    }  
    text  
}  
